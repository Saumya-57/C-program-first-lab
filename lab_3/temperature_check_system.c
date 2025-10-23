#include<stdio.h>
int main(){
	//temperature check system
	float temperature;
	printf("Enter the machine operating temperature:");
	scanf("%f",&temperature);
	if(temperature>60 && temperature<=80){
		printf("TEMPERATURE IS SAFE");
	}else{
		printf("WARNING!");
	}
	
	
	return 0;
}