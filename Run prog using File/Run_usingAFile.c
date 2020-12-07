//To run result with ./RunFile without providing input from keyboard
// compile :- gcc -o Run_usingAFile Run_usingAFile.c
// run :- ./Run_usingAFile < RunFileInput
#include<stdio.h>

int main()
{
  int scan = 0 ;
  //we can do directly using scanf() also

  printf("Value scanned from a file ..... \n");
  
  while((scan = getchar())!= EOF)
    putchar(scan);

    return 0;
}
