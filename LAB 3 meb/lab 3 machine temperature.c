#include<stdio.h>
int main(){
	
	
	float Temperature;
	printf("Enter the machine temperature(in degree celsius)=");
	scanf("%f", &Temperature);
	if(60<Temperature && Temperature<=80){
		printf("The machine temperature is in SAFE RANGE!");
	}else{
		printf("WARNING!");
	}
	
	
	
	
	return 0;
}