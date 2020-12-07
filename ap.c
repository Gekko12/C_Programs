/*
You will be given three numbers A,B,C .You can perform the following operation on these numbers any number of times.You 
can take any integer from A, B, C and you can add or substract 1 from it.
Each operation cost 1sec of time(say). Now you have to determine the minimum time required to change those numbers into
 an Arithmetic Progression. 
i.e B-A=C-B

Input :
First line of input contains T denoting number of test cases.
Next T lines contains space seperated integers A,B,C
Output :
For each test case, print a single line containing one integer — the minimum time require to change A,B,C into an arithmetic progression.

SAMPLE INPUT
5
-5 0 5
-5 7 6
-10 -100 20
1 -1 1
51 23 10
SAMPLE OUTPUT
0
7
105
2
8
*/

#include<stdio.h>
#include<math.h>
int main(){
  int t ;
  long a , b , c , n , d , bnew , ope , temp  ;
  scanf("%d",&t);

  while(t--){
    scanf("%ld%ld%ld",&a,&b,&c);
 
    n = fabs(c-a) - 1;

    if(n%2==0){
      d = (n+2)/2;

      if(a>0) a = a - 1;
      else a = a + 1;

      if(a<c) bnew = a + d;
      else bnew = a - d;

	ope = fabs(b - bnew) + 1;
	printf("%d \n",ope);
    }else{
      d = (n + 1)/2;

       if(a<c) bnew = a + d;
      else bnew = a - d;

       ope = fabs(b-bnew);
       printf("%d \n",ope);
    }
  }
  return 0;
}
