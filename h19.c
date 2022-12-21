#include<stdio.h>
#include<math.h>

int main(){
	
	int i,x,terim;
	float sum=1;
	int j=1; 
	int faktoriyel=1;
	
	printf("S=1+x+x^2/2!+x^3/3!+ ...\n");
	printf("\nx degeri giriniz:");	
	scanf("%d", &x);
	printf("\nTerim sayisi giriniz:");	
	scanf("%d", &terim);
		
	
		for( i=1 ; i<=terim-1 ; i++ ){
			while( j<=i ){
			faktoriyel=faktoriyel*j;	
			j++;
		}
		sum+=pow(x,i)/faktoriyel;
	}
	
	printf("\nToplam: %f\n",sum);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
