#include<stdio.h>

int main(){
	
	int sayi,x,y,a,us;
	int counter=1;
	int sum=0;
	int basamak=0;
	int b =1;
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi);
	

	
		while(counter<sayi ){
		
		x=counter;
		y=counter;
		
		
		
			while( x > 0 ){
			x=x/10;
			basamak++;
		}
	
		
				sum=0;
		
				while(y>0){
			
				a=y%10;
				y=y/10;
				us=a;
						
					
					while(b<basamak){
					a*=us;	
					b++;
			}	
			sum+=a;
		
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
