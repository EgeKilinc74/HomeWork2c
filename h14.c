#include<stdio.h>

int main(){
	
	int x,y,sayi;
	int d, faktoriyel;
	int i = 1;
	int sum=0;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	
	
		while(i<=sum){
		
		x=i;
		
		
		
			while(x>0){
		
			y=x%10;
			x=x/10;
		
			d=1;
			faktoriyel=1;
			
				while(d<=y){
				faktoriyel=faktoriyel*d;
				d++;
			}
					sum+=faktoriyel;
		}
	
					if(sum==i){
					printf("\n%d\n",i);
					i++; 
		}
					else{
					i++;
		}
		
	}
	
	return 0;
}
