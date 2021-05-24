#include<stdio.h>

int main(){
	float prest,tax,per,result,total;
	
	printf("valor da prestacao vencida:");
	scanf("%f",&prest);

	printf("valor taxa:");
	scanf("%f",&tax);
	
	printf("periodo de atraso:");
	scanf("%f",&per);
	
	tax = tax/100.0;
	result = (prest*tax)*per;
	total = result+prest;
	
	printf("\nvalor da prestacao:%0.2f\no periodo de atraso:%0.0f\njuros que seram cobrados:%0.2f\nvalor total e:%0.2f",prest,per,result,total);
	
	
		
	
	
	
}
