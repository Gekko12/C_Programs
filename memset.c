/* 
   memset() is used to set a memory to a defined value ie. place character c into first n characters of s , return s
   void* memset(s ,c ,n);
*/

#include<stdio.h>
#include<string.h> //For memset()
int main()
{
  printf("\n--------------For characters-----------------------\n");
  char str[] = "Gaurav";
  printf("Before memset() str[] = %s \n",str);
 

  memset(str ,'g' ,sizeof(str)); //Sets all str to 'G'
  printf("After memset() str[] = ");
   for(int i=0;i<sizeof(str);i++)
    printf("%c",str[i]);
   printf("\nOne extra set for (null) char \n");
  
  printf("\n---------------For integers---------------------------\n");
  int ary[]={1 ,2 ,3 ,4 ,5};
  printf("Before memset() ary[] = \n");
  for(int i=0;i<5;i++)
    printf("%d ",ary[i]);

  memset(ary ,0 ,sizeof(ary)); //Sets all ary(for int) elements to  0 or -1
  printf("\nAfter memset() setting to 0 ary[] = \n");
  for(int i=0;i<5;i++)
    printf("%d ",ary[i]);

  memset(ary ,-1 ,sizeof(ary)); 
  printf("\nAfter memset() setting to -1 ary[] = \n");
  for(int i=0;i<5;i++)
    printf("%d ",ary[i]);

  memset(ary ,5 ,sizeof(ary)); //It will not work for other integers as it work byte by byte
  printf("\nAfter memset() setting to any other int value like 5 produce unexpected result \n");
  for(int i=0;i<5;i++)
    printf("%d ",ary[i]);

  printf("\n\n");
  return 0;
}
