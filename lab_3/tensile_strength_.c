#include<stdio.h>
int main(){
	//comparison of tensile strength of two material
	float a,b,tensile_strength;
	printf("Enter the tensile strength of material 'a'(in MPa):");
	scanf("%f",&a);
	printf("Enter the tensile strength of material 'b' (in MPa):");
	scanf("%f",&b);
	if(a>b){
		printf("Tensile strength of material a is more");
	}else if(a<b){
		printf("Tensile strength of material  b is more");
	}else{
		printf("Tensile strength of material a and b is same");
	}
	
	
	return 0;
}