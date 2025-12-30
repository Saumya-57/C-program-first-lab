#include<stdio.h>
int main(){
	
	float x,i,n,sum,avg;
	printf("Enter value of n:");
	scanf("%f",&n);
	sum=0;
	while(n<=1){
		printf("invalid input, enter again:");
		scanf("%f",&n);
		
	}
	
	
	for(i=1;i<=n;i++)
	{   printf("enter a no.");
	    scanf("%f",&x);
	    sum=sum+x;
	}
	avg=sum/n;
	printf("sum is:%f\n",sum);
	printf("average is:%f",avg);
	
	return 0;
}