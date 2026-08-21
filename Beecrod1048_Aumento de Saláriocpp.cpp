#include<stdio.h>
int main (){
	
	float salario,reajute;
	int P;
	
	scanf("%f",&salario);
	
	if(salario<=400){
		
		P=15;
		reajute=salario*0.15;
		salario+=reajute;
		
	}else if(salario<=800){
		
		P=12;
		reajute=salario*0.12;
		salario+=reajute;
		
	}else if(salario<=1200){
		
		P=10;
		reajute=salario*0.1;
		salario+=reajute;
		
	}else if(salario<=2000){
		
		P=7;
		reajute=salario*0.07;
		salario+=reajute;
		
	}else if(salario>2000){
		
		P=4;
		reajute=salario*0.04;
		salario+=reajute;
		
	}
	
	printf("Novo salario: %.2f\n",salario);
	printf("Reajuste ganho: %.2f\n",reajute);
	printf("Em percentual: %d %\n",P);
}
