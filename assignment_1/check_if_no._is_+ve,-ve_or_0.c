#include<stdio.h>
int main(){
	//accepts a no. from user and displays whether it is positive,negative or 0
	float a;
	printf("Enter the value of a:");
	scanf("%f",&a);
	if(a>0){
		printf("a is positive");
	}else if(a<0){
		printf("a is negative");
	}else{
		printf("a is 0");
	}
	
	
	return 0;
}