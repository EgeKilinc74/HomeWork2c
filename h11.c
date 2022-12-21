#include<stdio.h>

int main(){
	
	int sayi;
	int counter=1;
	int sum=0;
	
	printf("Bir sayi:");
	scanf("%d",&sayi);
	
		while(counter<sayi){
		
			if(sayi%counter== 0){
			sum+=counter;
			counter++;
		}
			else{
			counter++;
		}
	
	}
	
				if(sum==sayi)
				printf("\nMukemmel sayidir.");
				else
				printf("\nMukemmel sayi degildir.");
	









	return 0;
}
