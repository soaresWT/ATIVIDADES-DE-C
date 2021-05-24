#include<stdio.h>

int main(){
	float real,taxa,result;
	
	printf("valor em real:");
	scanf("%f",&real);
	
	printf("valor em real:cotacao dolar:");
	scanf("%f",&taxa);
	
	result = real*taxa;
	
	printf("valor convertido:%0.2f",result);
	
}
