#include<stdio.h>

int main(){
	int numeros[3],I;
	for(I=0;I<3;I++){
		
		printf("Digite %d numero",I+1);
		scanf("%d",&numeros[I]);
	
		}
	
	if(numeros[0] < numeros[1] && numeros[0] < numeros[2]){
		
		printf("%d\n",numeros[0]);
		
		if(numeros[1]<numeros[2]){
			
			printf("%d\n",numeros[1]);		
			printf("%d\n",numeros[2]);
		
		}else{
			printf("%d\n",numeros[2]);		
			printf("%d\n",numeros[1]);
			
		}
		
	}else {
		if(numeros[1] < numeros[0] && numeros[1] < numeros[2]){
		
			printf("%d\n",numeros[1]);
		
			if(numeros[0] < numeros[2]){
			
				printf("%d\n",numeros[0]);		
				printf("%d\n",numeros[2]);
		
			}else{
				printf("%d\n",numeros[2]);		
				printf("%d\n",numeros[0]);
			
			}
		
		}else{
			if(numeros[2] < numeros[0] && numeros[2] < numeros[1]){
		
				printf("%d\n",numeros[2]);
		
				if(numeros[0]<numeros[1]){
			
					printf("%d\n",numeros[0]);		
					printf("%d\n",numeros[1]);
		
				}else{
					printf("%d\n",numeros[1]);		
					printf("%d\n",numeros[0]);
			
				}
		
		
			}
		}
	}
	printf("\n%d\n",numeros[0]);
	printf("%d\n",numeros[1]);
	printf("%d\n",numeros[2]);
}
	

