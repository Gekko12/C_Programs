/*
  Program to count the number of newline ,blanks ,tabs ,digits ,fullstop ,alphabets and other characters
  by taking input from file

  Compile: gcc -o BinFile Exe1.8.c
  Run: ./BinFile < Input
*/

#include<stdio.h>

int main()
{
  char ch ;
  int ndigi=0 ,nline=0 ,nblank=0 ,ntab=0 ,nalpha=0 ,nfull=0 ,nothers=0 ;
  
  while((ch = getchar())!=EOF)
    {
      if(ch >= '0' && ch <= '9')
	ndigi++;
      else if((ch >= 'a' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
	nalpha++;
      else if(ch == '\n')
	nline++;
      else if(ch == '\t')
	ntab++;
      else if(ch == ' ')
	nblank++;
      else if(ch == '.')
	nfull++;
      else
	nothers++;
    }

  printf("\n Digits = %d \n Alphabets = %d \n NewLine = %d \n Tabs = %d \n Blanks = %d \n FullStops = %d \n Other chars = %d \n",ndigi ,nalpha ,nline ,ntab ,nblank ,nfull ,nothers );

  return 0;
}

  
    
