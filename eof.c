#include<stdio.h>
int main(){
  int nc=0;
  while(getchar()!=EOF){
    ++nc;
  }
  printf("Number of chars including white spaces : %d\n",nc);
  return 0;
}
