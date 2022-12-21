#include<stdio.h>
#include <math.h>

int main(){ 
   	
   	int sayi;
   	int sum=0;
   	int basamak=1;
   	int mod;
   	int n;
   	int x;
   		scanf("%d",&sayi);
   		n=sayi;
   		x=n;
   			while(sayi/10>0) {
		   		
				   basamak++;
				   sayi/=10;
}
						
		
						while(n/10>0){
							
							mod=n%10;
							sum+=pow(mod,basamak);
							n/=10;
								
							}
	
								if(x==sum) printf("Armstrong sayi");
								
								else printf("Armstrong sayi degil");
	
	return 0;
}


