#include<stdio.h>

int main(){
	
	float sayi,counter;
	float sum = 0;
	
	printf("1+1/2+1/3+ ...+1/n\n");
	printf("\nBir n degeri giriniz:");
	scanf("%f", &sayi);
	
		for( counter=1 ; counter<=sayi ; counter++ ){
		
		sum=sum+(1/counter);
		
	}
	
			printf("\nToplam: %f\n",sum);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
