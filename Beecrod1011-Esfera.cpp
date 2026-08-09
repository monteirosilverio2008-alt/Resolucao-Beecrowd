#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
	
	double raio;
	
	printf("Digite o raio da cicuferesia:");
	scanf("%lf",&raio);
	
	raio=(pow(raio,3)*PI*4)/3;
	
	printf("VOLUME = %.3lf\n",raio);
	
}
