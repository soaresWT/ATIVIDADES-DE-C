#include<stdio.h>

int main(){
	
	float dist,temp,velme,lit;
	printf("tempo de viagem:");
	scanf("%f",&temp);
	
	printf("velocidad media:");
	scanf("%f",&velme);
	
	dist = temp*velme;
	lit = dist/12;
	printf("distancia percorrida:%0.2f e litros consumidos:%0.2f",dist,lit);
}

	
	
	

