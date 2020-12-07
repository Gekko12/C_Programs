/*
Input :
    First line, contains an intger 'T' denoting no. of test cases.
    Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
Output:
    For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.
SAMPLE INPUT                  
3
sumit mitsu
ambuj jumba
abhi hibb
SAMPLE OUTPUT
YES
YES
NO

Explanation
For first test case,
mitsu can be rearranged to form sumit .
For second test case,
jumba can be rearranged to form ambuj .
For third test case,
hibb can not be arranged to form abhi.
*/

#include <stdio.h>

int main(){
	int t ,found=0 , len , count;
	char str1[100001] , str2[100001] ;
	
	scanf("%d",&t);
	while(t--){
		len=0 ,count=0;
	  scanf("%s%s",&str1,&str2);
		
		for(int i=0;str1[i]!='\0';i++)
			len++;

		for(int i=0;str1[i]!='\0';i++){
			found = 0;
			for(int j=0;str2[j]!='\0';j++){
			  if(str1[i]==str2[j]){
			    str2[j]='*';
			    found=1;
					count++;
			    break;
			  }
			}
			if(found==0){
				printf("NO \n");
				break;
			}
			
		}	  		  
	       
		if(count==len)
		  printf("YES\n");
	}
	
    return 0;
}


