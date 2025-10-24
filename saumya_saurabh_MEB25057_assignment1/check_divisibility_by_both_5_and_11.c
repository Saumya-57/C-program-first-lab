#include<stdio.h>
int main(){
	//input a no. and check whether it is divisible by both 5 and 11 or not
	int n;
	printf("Enter the desired no. n:");
	scanf("%d",&n);
	if (n % 5 ==0 && n % 11 ==0){
		printf("The given no. is divisible by both 5 and 11");
	}else{
		printf("The given no. is NOT divisible by bot 5 and 11");
	}
	
	
	return 0;
}