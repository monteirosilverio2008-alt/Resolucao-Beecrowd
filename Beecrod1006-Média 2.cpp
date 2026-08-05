#include<stdio.h>

int main(){
	double media ,nota2,nota3;
	
	printf("Digite as notas do aluno");
	scanf("%lf  %lf  %lf",&media ,&nota2,&nota3);


	media=(media*2+nota2*3+nota3*5)/10;
	
	printf("MEDIA = %.1lf\n",media);
	
	return 0;
}
