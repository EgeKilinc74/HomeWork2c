#include<stdio.h>

int main(){
	
	int x,y,sayi,toplam = 0;
	int counter=1;
	int faktoriyel=1;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	x = sayi;
	
	
	while(x>0){
		
		y=x%10;
		x=x/10;
		
		while(counter<=y){
			faktoriyel=faktoriyel*counter;
			counter++;
		}
		toplam+=faktoriyel;
	}
	
				if( toplam == sayi )
				printf("\nStrong sayidir.");
				else
				printf("\nStrong sayi degildir.");
	
	






	return 0;	
}
