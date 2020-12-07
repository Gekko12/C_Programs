/*
  Program to count the number of white spaces , digits and others
*/

#include<stdio.h>

int main(){
  int ndigi[10] ,nwhite=0 ,nothers=0 ;
  char ch;

  for(int i=0;i<10;i++)
    ndigi[i] = 0;
  
  FILE *fp = fopen("Count.txt","r");

  while((ch=getc(fp)) != EOF){
    if(ch>='0' && ch<='9')
      ++ndigi[ch-'0']; //It will increment the value at index of digit
    else if(ch==' ' || ch=='\n' || ch=='\t')
      ++nwhite;
    else
      ++nothers;
  }
  fclose(fp);

  printf("Digits :-\n [");
    for(int i=0;i<10;i++)
      printf("%d ,",ndigi[i]);

    printf("] \nWhiteSpaces :- \n");
    printf("%d\n",nwhite);

    printf("Others :-\n");
    printf("%d\n",nothers);

    return 0;
}
    
  
      
