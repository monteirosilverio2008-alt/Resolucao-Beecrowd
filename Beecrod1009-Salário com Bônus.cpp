#include<stdio.h>
#include<string.h>

int main(){
	
	double salarioF,Comisao;
	char nome[100];
	
	printf("Digite seu nome : ");
	scanf("%99[^\n]",&nome);
	
	printf("Digite o salario fixo e valo de venda : ");
	scanf("%lf %lf",&salarioF,&Comisao);
	
	salarioF+=(Comisao* 0.15);
	
	printf("TOTAL = R$ %.2lf",salarioF);
	
	
}
