#include<stdio.h>

int main(){
	int horas[2],minus[2],tempos[2],I;
	
	for(I=0;I<2;I++){
		
		scanf("%d %d",&horas[I],&minus[I]);
		minus[I]+=60*horas[I];
		
	}
	
	tempos[1]=minus[1]-minus[0];
	
	tempos[0]=tempos[1]/60;
	tempos[1]%=60;
	
	if(tempos[0]==0 && tempos[1]==0) tempos[0]=24;
	
	if else(tempos[0]<0 && tempos[1]<0){
		
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempos[0],tempos[1]);
}
