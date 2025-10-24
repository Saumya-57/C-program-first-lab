#include<stdio.h>
int main(){
	int operator;
	float a,b;
	printf("1.+\n2.-\n3.*\n4./\n");
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter an operator:");
	scanf("%d",&operator);
	
	switch(operator){
		case 1:
			printf("%f+%f=%f\n",a,b,a+b);
			break;
		case 2:
		    printf("%f-%f=%f\n",a,b,a-b);
		    break;
		case 3:
		    printf("%f*%f=%f\n",a,b,a*b);
		    break;
		case 4:
		   if(b!=0){
		      printf("%f/%f=%f\n",a,b,a/b);
		   }else{
		   	    printf("undefined.\n");
		   }
		  	break;
		default:
		    printf("Invalid operator.\n");     
	}
	
	
	return 0;
}