#include <stdio.h>
#include <math.h>


int main(){
	
	int a;
	int b;
	int c;
	int disk=0;
	int kok1,kok2;
	
		printf("2. dereceden denklemin koklerini bulma(ax^2+bx+c)degerleri giriniz:\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		
		disk=pow(b,2)-(4*a*c);
		
		kok1=(-b+sqrt(disk))/(2*a);
		kok2=(-b-sqrt(disk))/(2*a);		
			
		printf("Kok1:%d\tKok2:%d",kok1,kok2);	
			
			
	return 0;
}
