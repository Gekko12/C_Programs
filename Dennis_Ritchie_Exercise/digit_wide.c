//To demonstrate the format specifier and width set

#include<stdio.h>

int main(){

  printf("123456789_123456789_\n");
  for(int i=1;i<=5;i++){
    if(i%2 == 0)
      printf("%3.2f%7.1f\n",(i*5.1),(i*1000.2)); 
    else
      printf("%3d%7d\n",(i*5),(i*100)); // 3+7=10

  }
  return 0;
}
