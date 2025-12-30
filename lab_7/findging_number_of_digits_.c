#include<stdio.h>
int main(){
	int n ,i;
	i=0;
	 printf("Enter a number:");
	 scanf("%d",&n);
	 
	 if(n==0){
	 	i=1;
	 }else{
	 	while(n!=0){
	 		n=n/10;
	 		i++;
		 }
    }
	 printf("Numer of digits =%d",i);
	
	
	return 0;
}