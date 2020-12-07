#include<stdio.h>
void main()
{
  int bar =1;
  {
    int bar =2;     // In JAVA this will give compile-time errror
    printf("Hello \n");
  }
}
