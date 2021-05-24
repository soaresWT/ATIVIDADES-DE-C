#include<stdio.h>

int main(){
	float valor, desc, result;
	
	printf("valor do produto:");
	scanf("%f",&valor);
	
	printf("qual o desconto:");
	scanf("%f",&desc);
	
	desc = desc/100.00;
	result = valor*desc;
	
	printf("valor do desconto:%0.2f\n",result);
	result=valor-result;
	printf("valor do produto:%0.2f",result);
	
}
