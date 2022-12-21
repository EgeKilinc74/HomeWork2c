#include<stdio.h>
#include<math.h>

int main(){
	
	int i, x,terim;
	float sum=0;
	
	printf("S=x-x^3+x^5+...\n");
	printf("\nx degeri giriniz:");	scanf("%d", &x);
	printf("\nTerim sayisi giriniz:");	scanf("%d", &terim);
	
	
	for( i=1 ; i<=2*terim-1 ; i+=2 ){
		
		if( i==1 )
		sum+=x;
			if( i==3 )
			sum-=x*x*x;
				if( i>3 )
				sum+=pow(x,i);
	}
	
	printf("\nToplam:%f\n",sum);	
	










	return 0;
}
