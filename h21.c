#include<stdio.h>

int main(){
	
	int i,j,sayi,terim;
	int sum=0;
	
	printf("1 + 11 + 111 + 1111 + ... + n\n");
	printf("\nTerim sayisi giriniz:");
	scanf("%d", &terim);
	
	for(i=1 ; i<=terim ; i++){
		
		sayi=0;
			for(j=1 ; j<=i ; j++){
			sayi=1+(sayi*10);
		}
		sum+=sayi;
	}
	
				printf("Toplam: %d",sum);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
