#include<stdio.h>

int main(){
	
	int numero,cont,I=0;
	while(I<5){
		scanf("%d",&numero);
		
		if(numero%2==0){
			cont++;
		}
		I++;
	}
	
	printf("%d valores pares\n",cont);
}
