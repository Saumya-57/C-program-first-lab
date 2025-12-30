#include<stdio.h>
int main(){
   
    char i;
    printf("Alphabets from (A-Z)\n");
    for(i='A';i<='Z';i++){
    
    if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
	
    
   	printf("%c is vowel \n",i);
	}else{
		printf("%c is consonant \n",i);
	}
    }
    return 0;
 
}
 
 