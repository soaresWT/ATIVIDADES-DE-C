#include<stdio.h>

int main(){
	float a,b,c;
	
	printf("digite primeiro numero:");
	scanf("%f",&a);
	
	printf("digite segundo numero:");
	scanf("%f",&b);
	
	c=a+b;
	printf("valor da soma:%0.2f\n",c);
	c=a-b;
	printf("valor da subtracao:%0.2f\n",c);
	c=a*b;
	printf("valor da multiplicacao:%0.2f\n",c);
	c=a/b;
	printf("valor da divisao:%0.2f\n",c);
	
}
