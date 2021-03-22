/*
  Program to determine the range of all data types
*/

#include <stdio.h>
#include <limits.h>       // It defines const for size of integral data types
#include <float.h>    // It defines const for size of floating-point types

void unsigned_range(long);
void signed_range(long);

unsigned long long two_pow(long);

int main()
{
  long n = 0;

  printf("\n----------- Range of Data Types -----------------------\n");

  printf("\n\n Signed char : "); n = sizeof(char) * 8;
  signed_range(n);

  printf("\n Unsigned char : "); n = sizeof(char) * 8;
  unsigned_range(n);

  printf("\n\n Signed int : "); n = sizeof(int) * 8;
  signed_range(n);

  printf("\n Unsigned int : "); n = sizeof(int) * 8;
  unsigned_range(n);

  printf("\n\n Signed Short int : "); n = sizeof(short) * 8;
  signed_range(n);

  printf("\n Unsigned Short int : "); n = sizeof(short) * 8;
  unsigned_range(n);
  
  printf("\n\n Signed long int : "); n = sizeof(long) * 8;
  signed_range(n);

  printf("\n Unsigned long int : 0 to %lu ",ULONG_MAX);

  printf("\n\n Float : -%g to +%g ",FLT_MIN ,FLT_MAX); 

  printf("\n\n Double : -%g to +%g ",DBL_MIN ,DBL_MAX); 
  
  printf("\n\n");
  return 0;
}

void unsigned_range(long n)
{
   int from = 0 ;
   unsigned long to = two_pow(n) - 1UL ; // Range :- 0 to 2^n -1

  printf("%d to %ld ",from ,to);
}

void signed_range(long n)
{
  long from = two_pow(n-1);
  long to = from - 1;

  printf("%ld to +%lu ",(from*(-1L)) ,to);
}

unsigned long long two_pow(long n)
{
 unsigned long long p = 1;

  for(unsigned long long i = 1;i <= n;i++)
    p *= 2;
  
  return p;
}
  
