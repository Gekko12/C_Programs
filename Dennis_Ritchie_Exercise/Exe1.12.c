// Program to print one word per line

#include <stdio.h>

#define DONE 1 //If newline is generated with one blank
#define NOT_DONE 0

int main()
{
  char ch;
  int state = NOT_DONE;
  
  while((ch = getchar())!= EOF)
    {
      if(ch == ' ' && state == NOT_DONE) //If consecutive blanks are there too avoid it
	{
	  putchar('\n');
	  state = DONE;
	}
      else if( ch != ' ')
	{
	  putchar(ch);
	  state = NOT_DONE;
	}
    }
  return 0;
}
