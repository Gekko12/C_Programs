/*
  The number 42 is, in The Hitchhiker's Guide to the Galaxy by Douglas Adams, the "Answer to the Ultimate Question of Life, the
  Universe, and Everything", calculated by an enormous supercomputer named Deep Thought over a period of 7.5 million years.

  Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More
  precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at 
  input are integers of one or two digits.

  Example
  Input:
    1
    2
  88
  42
  99

  Output:
  1
  2
  88

*/

#include<stdio.h>

int main(){
  FILE *fp;
  fp = fopen("Universe.txt","r"); //It will read from a file
  
  int num;

  while(getc(fp) != EOF){
    fscanf( fp ,"%d",&num);
    if(num==42)
      fclose( fp );
    else
      printf("%d\n",num);
  }

  return 0;
}
