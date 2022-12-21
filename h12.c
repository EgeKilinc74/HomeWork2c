#include<stdio.h>

int main(){
	
	int sayi,counter=1;
	int a, sum;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);	
	
	while(counter<sayi){
	
		a=1;
		sum=0;
		
			while(a<counter){
		
				if(counter%a==0){
				sum+=a;
				a++;
			}
				else{
				a++;
			}
			
		}
	
					if(sum==counter){
					printf("\n%d\n",counter);
					counter++;
		}
					else{
					counter++;
		}
		
	}







	
	return 0;
}
