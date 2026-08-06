#include<stdio.h>

int main(){
	
	int fusionario,horas;
	float salario;
	
	printf("Digite numero do funsionario, horas trabalhadas e salario/hora");
	scanf("%d %d %f",&fusionario,&horas,&salario);
	
	salario=horas*salario;
	
	printf("NUMBER = %d \nSALARY = U$ %.2f\n",fusionario,salario);
}
