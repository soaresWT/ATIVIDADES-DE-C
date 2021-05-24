#include <stdio.h>

int main(){
	float a,b,c,d;
	
	printf("digite primeiro numero:");
	scanf("%f",&a);
	
	printf("digite segundo numero:");
	scanf("%f",&b);
	
	printf("digite terceiro numero:");
	scanf("%f",&c);
	d=(a+b+c)/3;
	printf("a media dos valores:%0.2f",d);
	
}
