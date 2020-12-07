/*
  To copy i/p to o/p ,replacing each string of one or more blanks by a single blank.
  
  Input:
  My name        is Gaurav Sharma.

  Output:
  My name is Gaurav Sharma.
*/

#include<stdio.h>

int main()
{
  char str[101];

  printf("Enter the string :\n");
  scanf("%[^\n]",str);

  int nblank = 0;

  printf("\nString after removing more than one blank space consecutively :\n");
  
  for(int i=0;str[i]!='\0';i++)
    {
      if(str[i] == ' ')
	{
	  nblank++;
	  
	  if(nblank < 2)
	    printf("%c",str[i]);
	}
      else
	{
	  nblank = 0;
	  printf("%c",str[i]);
	}
    }
  printf("\n\n");
  
  return 0;
}      
