#include <stdio.h>

//Program to print % sign on terminal
void main(void){
  printf("To print a tab : \\t \n");
  printf("To print a backslash : \\ \n");
  printf("\\c -> \c ,will print c only (with warning) because it\'s not a escape seq` \n");
  printf("To %s percentage symbol we have to use two percentage sign : %% \n", "print");
  printf("%d%s now % percent not printed", 123, " how");
  printf("\n\n");
}
