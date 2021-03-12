//Program to remove escape sequences from a string, escape(s, t) removes \n, \t with visible escape seq

#include <stdio.h>
#include <string.h>

void escape(char[], char[]);

void main(void)
{
  char s[] = " My name is \t Gaurav Sharma. \n What\'s your name \? \n";
  char t[sizeof(s)*2];
  
  printf("\n s[] :\n%s", s);

  escape(s, t);

  printf("\n\n s[] after making white spaces visible t[] :\n%s \n\n", t);
  //printf("%ld %ld", sizeof(s), sizeof(t));
 }

void escape(char s[], char t[])
{
  int i = 0;
  int j = 0;

  for(; s[i]!='\0'; i++, j++)
    {
      switch(s[i])
	{
	case '\t':
	  t[j++] = '\0';
	  char rept[] = "\\t";
	  strcat(t, rept);
       	  break;
	case '\n':
	  t[j++] = '\0';
	  char repn[] = "\\n";
	  strcat(t, repn);
	  break;
	default:
	  t[j] = s[i];
	  break;
	}
    }
  t[++j] = '\0';   //as str ends with null char
}
      
