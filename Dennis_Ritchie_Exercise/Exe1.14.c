/*
  Program to print a histogram using horizontal bars(-) of the frequencies of different charcaters in it
  Compile : cc -o BinFile Exe1.14.c
  Run : ./BinFile < Input.txt
*/
#include <stdio.h>
#include <string.h>

int main()
{
  char ascii[127];
  memset(ascii ,0 ,sizeof(ascii));

  char ch;
  while((ch = getchar()) != EOF)
    {
      ++ascii[(int)ch];
    }

  for(int i=33;i<127;i++) //space has 32 as ascii value
    {
      printf("\n  %c   %5d   |",(char)i ,ascii[i]);

      for(int j=0;j<ascii[i];j++)
	{
	  printf("-");
	}
    }

  printf("\n");

  return 0;
}
