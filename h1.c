#include <stdio.h>

int main(){
	
	int kenar1,kenar2;
	int alan = 0;
	int cevre = 0;
	
		printf("Alan Bulma(Kenarlari Giriniz):\n");
		scanf("%d",&kenar1);
		scanf("%d",&kenar2);
		
		
		alan=kenar1*kenar2;
		cevre=2*(kenar1+kenar2);
		
		printf("Alan:%d\n",alan);
		printf("Cevre:%d",cevre);
	
	
	
	
	
	
	
	return 0;
}
