#include<stdio.h>
int main(){
	//vibration analysis problem
	float vibration_amplitude,frequency;
	printf("Enter the value of vibration amplitude (in mm):");
	scanf("%f",&vibration_amplitude);
	printf("Enter the value of frequency (in Hz):");
	scanf("%f",&frequency);
	if(vibration_amplitude>0.5 && frequency>=20 && frequency<=50){
		printf("HIGH RISK");
	}else if(vibration_amplitude>0.5 && frequency>60){
		printf("MEDIUM RISK");
	}else{
		printf("LOW RISK");
	}
	
	
	
	return 0;
}