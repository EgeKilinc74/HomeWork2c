#include<stdio.h>

int main(){
	
	int sonuc=0;
	int x=1;
	int a;

	printf("Donusum icin bir sayi giriniz:");
	scanf("%d",&a);	
	
	
		while(a>0){
				
		sonuc+=(a%2)*x;
		x*=10;	
		a/=2;	
	}
	
			printf("\nSonuc: %d",sonuc);













	return 0;
}	
