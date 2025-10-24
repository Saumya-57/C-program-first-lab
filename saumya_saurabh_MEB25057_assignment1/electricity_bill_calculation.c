#include<stdio.h>
int main(){
	/*calculate the electricity bill based on the condition
	 upto 100 unit-Rs. 1.5 per unit
	 101 to 200-Rs. 2 per unit
	 201 to 300-Rs. 3 per unit
	 above 300-Rs. 5 per unit*/
	 int units;
	 float amount, total_amount;
	 printf("Enter the units consumed:");
	 scanf("%d",&units);
	 if(units<= 100){
	 	amount=units*1.5;
	 }else if(units<=200){
	 	amount= 150+((units-100)*2);
	 }else if(units<=300){
	 	amount=350+((units-200)*3);
	 }else{
	 	amount=650+((units-300)*5);
	 }
	printf("Electricity bill is:%f",amount);
	
	
	return 0;
}