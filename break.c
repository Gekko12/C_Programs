#include<stdio.h>

int main(){
        int i;
        
        for(i=5;i>-1;i--){
                i=i+1;
                break; //There will be no effect of decrement
        }
        printf("i = %d \n\n",i); // i=6
        
        return 0;
}
