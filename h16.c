#include<stdio.h>
#include<math.h>

int main(){
	
	int terim;
	int x;
	int i, d, faktoriyel;
	int sira=2; 
	float toplam = 1;
	
	printf("1 - X^2/2! + X^4/4! - ...\n");
	printf("\nX degeri:");
	scanf("%d", &x);
	printf("Terim sayisi:");
	scanf("%d", &terim);
	

	
	
		for( i=2 ; i<=(terim-1)*2 ; i+=2 ){
		
		d=1,faktoriyel=1;
			while(d<=i){
			faktoriyel=faktoriyel*d;
			d++;
		}
				if(sira%2==0){
					toplam-=pow(x,i)/faktoriyel;
		}
				else{
					toplam+=pow(x,i)/faktoriyel;
		}
						sira++;
	}

	
	printf("\nToplam:%f",toplam);
	









	return 0;
}
