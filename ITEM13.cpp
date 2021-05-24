#include<stdio.h>

int main(){
	float v,c;
	printf("valor da poupança:");
	scanf("%f",&v);
	c=(v*0.02)+v;
	printf("valor reajustado e:%0.2f",c);
}
