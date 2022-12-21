#include<stdio.h>

int main(){
	
	int counter=100,sum=0;
		
	for(counter ; counter<200 ; counter++){
		
		if(counter%9==0){
			printf("%d\n",counter);
			sum+=counter;
		}
	}
	
				printf("\nToplam:%d",sum);
	










	return 0;
}
