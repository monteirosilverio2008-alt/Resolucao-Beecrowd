#include <stdio.h>

int main(){
	int I,numero,maior = 0;
	 
	
	for(I=0;I<3;I++){
		
		printf("Digite %dº",I+1);
		scanf("%d",&numero);
		
		if(numero>maior){
			
			maior=numero;
			
		}
	}
	printf("%d eh o maior\n",maior);
	
}
