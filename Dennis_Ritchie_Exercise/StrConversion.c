/*
  Without using <string.h> , <ctype.h> and <stdlib.h> 

  Program contain this functions :-
   1. string into integer eg. str="1234" to int i = my_atoi(char[]) //string to int
   2. lower case the str 
   3. upper case the str
   4. isdigit ...check whether character is a digit
   5. rand() generates random number 
   6. str concatenation
   7. convert str to hexadecimal digits
   8. squeeze(s1 ,s2) to remove each char in s1 that matches s2
   9.any(s1 ,s2) to return the first char matching position in s1
*/



#include <stdio.h>
#include <stdlib.h>

unsigned long int next = 1; //For random number generator


int my_isdigit(char ch) //ctype.h  int isdigit(char)
{
  if(ch>='0' && ch<='9')
    return 1;
  
  return 0;
}

int my_htoi(char str[]) //convert hexadecimal str to int
{
  int num = 0;
  for(int i=0;str[i]!='\0';i++)
    {
      if(str[i]>='0' && str[i]<='9')
	num = num*16 + (str[i] - '0');
      else if(str[i]>='a' && str[i]<='f')
	num = num*16 + (str[i] - 87); //as 'a'=10 ,'b'=11 ...in hex
      else if(str[i]>='A' && str[i]<='F')
	num = num*16 + (str[i] - 55);
    }
  return num;
}

int my_atoi(char str[]) //stdlib.h   int atoi(char[])
{
  int num = 0; 
  for(int i=0;str[i]!='\0';i++)
    if(my_isdigit(str[i]))
      num = (num*10) + (str[i] - '0');

  return num;
}

int my_tolower(int ch) //ctype.h   int tolower(int c)
{
  if(ch>='A' && ch<='Z')
    ch = ch + ('a' - 'A'); //or simple ch+32
  else
    return ch;

  return ch;
}

int my_toupper(int ch) //ctype.h   int toupper(int c)
{
  if(ch>='a' && ch<='z')
    ch = ch - ('a' - 'A'); //or simple ch-32
  else
    return ch;

  return ch;
}

void my_strcat(char s1[] ,char s2[]) //string.h    char *strcat(char s[] ,char ct[])
{
  int i=0 ,j=0;
  
  for(i=0;s1[i]!='\0';i++)
    ; //for str length

  while(s2[j]) //Till '\0' char
    s1[i++] = s2[j++];

  s1[i] = '\0';

}

int my_rand() //stdlib.h    int rand(void)
{
  next = next * 7927  + 12345;

  return (unsigned int)(next/65536) % 32768 ;
}

void delete(char s1[] ,int len1)
{
  char temp[30];
  int j = 0;
  
  for(int i=0;i<len1;i++)
    {
      if(s1[i] != '*')
	temp[j++] = s1[i];
    }
  for(int i=0;i<len1;i++)
    s1[i]='\0';

  for(int i=0;i<j;i++)
    s1[i] = temp[i];
}

void squeeze(char s1[] ,char s2[])
{
  int len1 ,len2;
  for(len1=0;s1[len1]!='\0';len1++);
  for(len2=0;s2[len2]!='\0';len2++);

  for(int i=0;i<len2;i++)
    {
      for(int j=0;j<len1;j++)
	if(s2[i]==s1[j])
	  s1[j] = '*'; //to denote a match
    }
  delete(s1 ,len1);
}

int any(char s1[] ,char s2[])
{
  int pos = -1;

  for(int i=0;s1[i]!='\0';i++)
    for(int j=0;s2[j]!='\0';j++)
      if(s1[i]==s2[j])
	{
	  pos = i;
	  return pos;
	}

  return pos;
}

int main()
{
  int choice  , num ;
  char str[101] ,ch;

  while(1)
    {
      printf("\n---------------- MENU -------------------------\n");
      printf("\n1.Is digit \n2.Convert str to int \n3.Convert str to lower");
      printf("\n4.Convert str to upper \n5.String concat ");
      printf("\n6.String to hexadecimal \n7.Random N generator ");
      printf("\n8.Del matching char \n9.Return pos of first mat char in s1 using s2 \n10.Exit");

      printf("\n\nEnter your choice :");
      scanf("%d%*c",&choice);
     
      switch(choice)
	{
	case 1:printf("\nEnter a character:");
	  scanf("%c",&ch);
	  if(my_isdigit(ch))
	    printf("\nChar is a digit.");
	  else
	    printf("\nChar is not a digit.");
	  break;
	  
	case 2:printf("\nEnter a string:");
	  scanf("%s",str);
	  num = my_atoi(str);
	  printf("\nNum = %d",num);
	  break;

	case 3:printf("\nConert str to lower case :");
	  scanf("%s",str);
	  for(int i=0;str[i]!='\0';i++)
	    printf("%c",my_tolower(str[i]));
	  printf("\n");
	  break;

	case 4:printf("\nConert str to upper case :");
	  scanf("%s",str);
	  for(int i=0;str[i]!='\0';i++)
	    printf("%c",my_toupper(str[i]));
	  printf("\n");
	  break;

	case 5:printf("\nEnter str1:");
	  char str1[100] ,str2[50];
	  scanf("%s",str1);
	  printf("\nEnter str2:");
	  scanf("%s",str2);
	  my_strcat(str1 ,str2);
	  printf("\nString = %s ",str1);
	  break;

	case 6:printf("\nEnter a hexadecimal string :");
	  scanf("%s",str);
	  num = my_htoi(str);
	  printf("\nInteger value = %d",num);
	  break;

	case 7:printf("\nRandom number generated = %d ",my_rand());
	  break;

	case 8:printf("\nEnter str1:");
	  char s1[30] ,s2[30];
	  gets(s1); //This will give warning but works fine
	  printf("\nEnter str2:");
	  gets(s2);
	  squeeze(s1,s2);
	  printf("After del matching char str1 = %s",s1);
	  break;

	case 9:printf("\nEnter str1:");
	  char st1[30] ,st2[30];
	  scanf("%s",st1); 
	  printf("\nEnter str2:");
	  scanf("%s",st2);
	  printf("First matching pos of str1 in str2 (base index 0) = %d",any(st1,st2));
	  break;
	  
	case 10:
	  exit(0);
	  
	default:printf("\nWrong input ......");
	}
    }
  return 0;
}
