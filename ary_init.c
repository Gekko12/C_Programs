#include <stdio.h>

#define MAX 5
#define dprintf(exp) printf(#exp " = %d ",exp) //Same to printf("exp = %d ",exp); #is used to print string

int ext_ary[MAX]; //External ary is by default init to 0 during compile time only

main(void)
{
  
  int ary[5] = {1,2}; //rest of the automatic/local ary elements are initialised to zero during compile time ie.
                      // ary[4]= ary[2]= ary[3]= 0; //ShortHand notation int ar[5] ={0} set whole ary to 0

  /*
    This will give error as n is unknown during compile time
    int n;  
    scanf("%d",&n);
    int ary[n]={0};   //gives error as rest of uninitialised ary is set to 0 during compile time ,but size is still
                      // unknown
    */
  for(int i=0;i<5;i++)
    dprintf(ary[i]);

  printf("\n\n");

  for(int i=0;i<MAX;i++)
    dprintf(ext_ary[i]); //User-defined printf() that prints exp also

  printf("\n\n");
  return 0;
}
