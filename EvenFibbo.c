#include<stdio.h>
//** Most suited outcome is in directory C++_Programs , named EvenFibboMod.cpp for large values such as 100,1000 **
void main(){
  int t , n , count ;
  long long fir , sec , third ;

  printf("Enter the number of test cases :");
  scanf("%d",&t);
  
  for(int i=0;i<t;i++){
    printf("Enter the position  :"); 
    scanf("%d",&n);

    fir = 0 , sec = 1 , count =0 ;
    printf("\n %lld %lld ",fir,sec);
    while(1){
      third = fir + sec ;
      fir = sec;
      sec = third ;
      
      printf("%lld ",third);

      if(third % 2 == 0)
	count ++;
      if(count == n){
	/* In most of the programming competitions, we are required to answer the result in 10^9+7 modulo. 
           The reason behind this is, if problem constraints are large integers, only efficient algorithms can solve
            them in allowed limited time.
	 */
	printf(" %dth even number in Fibonacci having :- %lld \n",n,third % 1000000007);
        break;
      }
    }
  }
}
