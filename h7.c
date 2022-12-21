#include <stdio.h>

int main(){
	
	int sayi;
	int i=2;
	int asalkontrol=0;
	int sum;
	scanf("%d",&sayi);
	
	
	 	for(i=2 ; i<sayi ; i++){
	 	
		 		
			if(sayi%i==0){
				
				asalkontrol=1;
				
				break;
				
			} 			
	 		
	 		
			if(asalkontrol==0) {
				
				printf("%d,",i);
				i++;
				sum+=i;
			}
	 		
	 		
	 		
		 }
	 		
	 	
							
		 
	
	
	
	
	
	
	
	
	return 0;
}
