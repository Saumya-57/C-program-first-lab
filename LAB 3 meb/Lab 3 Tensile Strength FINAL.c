#include<stdio.h>
int main(){
	 float x,y,TensileStrength;
	 printf("Enter the tensile strength of material x(in MPa)=");
	 scanf("%f",&x);
	 printf("Enter the tensile strength of material y(in MPa)=");
	 scanf("%f",&y);
	 if(x>y){
	 	printf("Tensile Strength of x is more");
	 }else if(x<y){
	 	printf("Tensile Strength of y is more");
	 }else{
	 	printf("Tensile Strength of x and  y is same");
	 
	 	

	 }
 
	
	
	return 0;
	
}