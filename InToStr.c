/*
  Program to convert int to string
*/

#include <stdio.h>
#define MAX 10

void itoa(int num ,char str[]);
void rev(char[]);
  
int main()
{
  int num ;
  printf("\nEnter the number :");
  scanf("%d",&num);

 
  char str[MAX] ;
  itoa(num ,str);

  printf("\nInt converted to string : %s \n\n",str);
  return 0;
}

void itoa(int num ,char str[])
{
  int sign ,i=0 ;
  
  if((sign=num) < 0)
    num = -num; //make it positive

  while(num > 0)
    {
    str[i++] = num%10 + '0';
    num /= 10;
    }

  if(sign < 0)
    str[i++] = '-';

  str[i++] = '\0';
  
  rev(str);  
}


void rev(char str[])
{
  int len ,j=0 ,ch ;
  for(len=0;str[len]!='\0';len++)
    ;
  
  for(int i=len-1 ;i > j ;i--,j++)    //compact version:-
    {                                //     for(i=0,j=len-1;i<j;i++,j--)
      ch = str[j];                 //         ch=str[i] ,str[i]=str[j] ,str[j]=ch;
      str[j] = str[i];
      str[i] = ch;
    }
 
}
      
    
      
