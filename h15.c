#include<stdio.h>

int main(){

	int x,y,sayi,nsayi=0;
	
	printf("Bir sayi giriniz:"); 
	scanf("%d",&sayi);
	
	x=sayi;
	
		while(x>0){
		y = x % 10;
		nsayi=y+(nsayi*10);
		x=x/10;
	} 
             
			if(sayi==nsayi)
			printf("\nPalindromik sayidir.");
    		else
			printf("\nPalindromik sayi degildir.");
             
  
  
  
  
  
  
  
  
  
  
  
  
             
 	return 0;           
}

