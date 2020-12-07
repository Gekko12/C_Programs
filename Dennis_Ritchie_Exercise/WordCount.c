/*
  Program to count the word in a file
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  char ch;
  int state = IN;
  int wc = 0;
  
  while((ch = getchar())!=EOF)
    {
      if(ch == ' ' || ch == '\n' || ch == '\t')
	state = OUT;
      else if(state == OUT)
	{
	  wc++;
	  state = IN;
	}
    }

  printf("\nNumber of words in a file = %d \n\n",wc);

  return 0;
}

      
