#include<stdio.h>
int main(){
	float mass,velocity,KineticEnergy;
	printf("Enter the value of mass (in kg)=");
	scanf("%f",&mass);
	printf("Enter the value of velocity(in m/s)=");
	scanf("%f",&velocity);
	KineticEnergy=0.5*mass*velocity*velocity;
	printf("kinetic energy is=%f",KineticEnergy);

	
	
	
	return 0;
}