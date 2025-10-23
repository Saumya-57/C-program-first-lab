#include<stdio.h>
int main(){
	//Stress analysis system
	float applied_stress, material_yield,fos;
	printf("Enter the value of applied stress (in MPa):");
	scanf("%f",&applied_stress);
	printf("Enter the value of material yield(in MPa)");
	scanf("%f",&material_yield);
	fos=material_yield/applied_stress;
	if(fos>=2.0){
		printf("SAFE DESIGN \n");
	}else if(fos>=1.5 && fos<2.0){
		printf("ACCEPTABLE WITH MONITORING");
	}else{
		printf("DANGER REDESIGN NEEDED");
	}
	
	
	
	return 0;
}