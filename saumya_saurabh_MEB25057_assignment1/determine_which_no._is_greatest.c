#include<stdio.h>
int main(){
	//input three no. and determine which one is greatest
	float x,y,z;
	printf("Enter the value of x:");
	scanf("%f",&x);
	printf("Enter the value of y:");
	scanf("%f",&y);
	printf("Enter the value of z:");
	scanf("%f",&z);
	if(x>=y && x>=z){
		printf("The largest number is x \n");
	}else if(y>=x && y>=z){
		printf("The largest number is y \n");
	}else{
		printf("The largest number is z");
	}

	
	
	return 0;
}