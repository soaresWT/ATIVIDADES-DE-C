#include<stdio.h>

int main(){
	float result,c;
	
	printf("qual valor em celsius\n");
	scanf("%f",&c);
	
	result = ((9*c)+160)/5;
	printf("resultado da conversao\n%0.2f",result);
	
}
