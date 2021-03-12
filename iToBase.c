/*
  Program that convert a number to a base b  representation in the string.

  2 means Binary
  8 means Octal
  10 means Decimal ....no need extra claculation as integers are also decimal
  16 means Hexadecimal
*/

#include <stdio.h>
#define MAX 50

void itob(int num ,char s[] ,int b);
void rev(char[]);

int main()
{
  int num;
  printf("\nEnter a number :");
  scanf("%d",&num);

  char str[MAX];
  printf("\nBase value like 2,8,10 and 16 hex :");
  int b; scanf("%d",&b);

  itob(num ,str ,b);

  printf("\nAfter base conversion : %s \n\n",str);
  return 0;
}

void itob(int n ,char s[] ,int b)
{
  int sign ,i=0;

  if((sign=n)<0)
    n = -n;

  if(b < 16)
    {
      do{
	s[i++] = n%b + '0';
      }while((n /= b) > 0);
    }
  else
    {
      do{
	if(n%b < 10)
	  {
	    s[i++] = n%b + '0';
	  }
	else
	  {
	    switch(n%b)
	      {
	      case 10:s[i++] = 'A';
		break;
	      case 11:s[i++] = 'B';
		break;
	      case 12:s[i++] = 'C';
		break;
	      case 13:s[i++] = 'D';
		break;
	      case 14:s[i++] = 'E';
		break;
	      case 15:s[i++] = 'F';
		break;
	      }
	  }
      }while((n /= 16) > 0);

      s[i++] = 'X';
      s[i++] = '0';
    }

  if(sign < 0)
    s[i++] = '-';

  s[i++] = '\0';

  rev(s);
}

void rev(char s[])
{
  int len , c ,j;

  for(len=0;s[len]!='\0';len++)
    ;

  for(int i=0 ,j =len-1; i<j;i++ ,j--)
    c = s[i] ,s[i] = s[j] ,s[j] = c;

}
    
  
