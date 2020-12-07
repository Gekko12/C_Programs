/*
       https://he-s3.s3.amazonaws.com/media/uploads/2a68dd86-3443-40b0-bef0-d7eb276b6154.jpeg

     Alice got a number written in seven segment format where each segment was creatted used a matchstick.
     Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number. 
     Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she
     currently possess.Help Alice out by telling her that number.
Input Format:
First line contains T (test cases).
Next T lines contain a Number N.
Output Format:
Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to 
generate N.

Constraints: 1<= T <=100 , 1<= N(length_of_number) <=100

SAMPLE INPUT
2
1
0
SAMPLE OUTPUT
1
111

Explanation
If you have 1 as your number that means you have 2 match sticks.You can generate 1 using this.
If you have 0 as your number that means you have 6 match sticks.You can generate 111 using this.
 */

#include <stdio.h>
int main(){
	int t , n , sum , temp , digi;
	int sticks[]={6,2,5,5,4,5,6,3,7,6};
	char str[101];

	scanf("%d", &t);              		

	while(t--){

	  scanf("%s",str);
          sum = 0;
	  for(int i=0;str[i]!='\0';i++){
	    n = str[i] - '0'; // To convert a char number to int num
		temp = n;
		while(temp>0){
			digi = temp % 10;
			sum += sticks[digi];
			temp /=10;
		}
		if(n==0)
		 sum += 6;
	  }
	  
		if(sum % 2==0){
			for(int i=1;i<=sum/2;i++)
			  printf("1");
		}
		else{
			sum = sum-3;
			printf("7");
				
		    if(sum%2 == 0){
			 for(int i=1;i<=sum/2;i++)
			   printf("1");
			}
				
		}
	  
		printf("\n");
	}
	return 0;
}
