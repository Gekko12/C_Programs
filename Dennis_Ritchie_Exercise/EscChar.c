/*
  Program to convert any escape characters with its equivalent visible chars of string .
  Compile : gcc -o BinFile EscChar.c
  Run : ./BinFile < Input.txt
*/

#include <stdio.h>

#define MAX 500

void esc(char[] ,char[]);
int mgetline(char s[],int lim);

int main()
{
  char st[MAX] = "" ,temp[MAX] = "" ; //Empty strings

  mgetline(st ,MAX);

  esc(st ,temp);

  printf("\nString after inserting visible esc chars : \n\n %s",temp);
  printf("\n\n");
  return 0;
}

void esc(char str[] ,char temp[])
{
  int i ,j ;
  
  for(i=0,j=0;str[i]!='\0';i++)
    {
      switch(str[i])
	{
	case '\t': temp[j++] = '\\';
	  temp[j++] = 't';
	  break;
	case '\n': temp[j++] = '\\';
	  temp[j++] = 'n';
	  break;
	default:temp[j++] = str[i];
	  break;
	}
    }
  
  temp[j++] = '\0';
}

int mgetline(char s[],int lim)
{
  int i,c;

  for(i=0;i<lim-1 && (c=getchar())!=EOF;++i)
    s[i]=c;

  s[i]='\0';
}
