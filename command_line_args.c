#include <stdio.h>

int main(int argc ,char* arg[])
{
	
    printf("Commands entered while executing	\n\n");
     	
	for(int i=0;i<argc;i++)
		printf("arg[%d]=%s \n",i,arg[i]);
	
	printf("\n");
	return 0;
}
