#include<stdio.h>

int main(){
	double salario,importo;
	
	scanf("%lf",&salario);
	
	if(salario <= 2000){
		
		printf("Isento\n");
		
	}else if(salario<=3000 ){
		
		importo = (salario-2000)*0.08;
		printf("R$ %.2f\n",importo);
			
	}else if(salario <= 4500){
		
		importo = (1000.00 * 0.08) + ((salario-3000)*0.18);
		printf("R$ %.2f\n",importo);
			
		}else{
		
		importo=(0.18 * 1500)+(1000 * 0.08)+((salario-4500)*0.28);
		printf("R$ %.2f\n",importo);
			}
		
	
}

