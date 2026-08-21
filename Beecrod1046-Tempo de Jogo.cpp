#include<stdio.h>

int main(){
	
	int horaI,horaF,horaT;
	
	scanf("%d %d",&horaI,&horaF);
	
	if(horaI==horaF){
		
		horaT=24;
		
	}else if(horaI<horaF){
		
		horaT=horaF-horaI;
		
	}else{
		
		horaT=(24-horaI)+horaF;
		
	}
	
	printf("O JOGO DUROU %d HORA(S)\n",horaT);
	
	
}
