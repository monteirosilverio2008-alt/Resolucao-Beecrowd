#include <stdio.h>
#define PI 3.14159

int main (){

	float A,B,C;
	double areas[5];
	
	printf("Digite os pontos A,B,C");
	scanf("%f %f %f",&A,&B,&C);
	
	areas[0] = (A * C) /2 ;
	areas[1] = (C*C) * PI ;
	areas[2] = ( A + B ) * C /2 ;
	areas[3] = B * B ;
	areas[4] = (A * B)  ;
	
	
	
	
	
	printf("TRIANGULO: %.3lf\n",areas[0]);
	printf("CIRCULO: %.3lf\n",areas[1]);
	printf("TRAPEZIO: %.3lf\n",areas[2]);
	printf("QUADRADO: %.3lf\n",areas[3]);
	printf("RETANGULO: %.3lf\n",areas[4]);

	
}
