// Profram to demonstrate the else-if without else part(ie. it's not necessary)

#include <stdio.h>

int main()
{
  for(int i=1;i<=5;i++)
    {
      if(i%2 == 0)
	printf("%d is even ..\n",i);
      else if(i%2 != 0)
	printf("%d is odd ..\n",i); //See else part is not there
    }
  return 0;
}
  
