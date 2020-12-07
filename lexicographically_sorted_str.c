#include<stdio.h>

#define MAX 1000001

void quick(int ,int ,char [] );
int partition(int  ,int  ,char []);
void swap(char *,char *);

int main(){
  int size=0 ,t ;
  char ary[MAX];

  printf("\nEnter the number of test cases:");
  scanf("%d",&t);
 
  while(t--){
    printf("Enter the string :");
    scanf("%s",&ary);

    for(size=0;ary[size]!='\0';size++);
  
    quick( 0 , size-1 , ary );

    printf("String in the lexicographically decending order :\n");
    for(int i=size-1;i>=0;i--)
      printf("%c",ary[i]);
    printf('\0');

    printf("\n");
  }

  return 0;
}

void swap(char *a,char *b){
  char temp = *b; //temp store the value of b
  *b = *a; //value at a
  * a = temp;
}

int partition(int low ,int high ,char arr[]){
  char pivot = arr[high]; // last element as pivot 
  int i = (low - 1); // Index of smaller element 

  for (int j = low; j <= high- 1; j++) 
    { 
      // If current element is smaller than the pivot 
      if (arr[j] < pivot) 
	{ 
	  i++; // increment index of smaller element 
	  swap(&arr[i], &arr[j]); 
	} 
    } 
  swap(&arr[i + 1], &arr[high]); // Don't put &pivot  rather than &arr[high] as we want to swap ary elements
  return (i + 1); 
}
 
void quick(int start ,int end ,char ary[]){
  if(start < end){
    int split_pos = partition(start,end,ary);
    quick( start , split_pos - 1 , ary);
    quick( split_pos+1 , end , ary);
  }
}

