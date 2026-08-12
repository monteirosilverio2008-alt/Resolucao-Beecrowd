#include<stdio.h>

int main(){
	int numeros[2];
	
	scanf("%d %d",&numeros[0],&numeros[1]);
	
	if(numeros[1]%numeros[0]==0||numeros[0]%numeros[1]==0){
		
		printf("Sao Multiplos\n");
	}else{
		
		printf("Nao sao Multiplos\n");
	}
	
}
