#include <stdio.h>
 int main (){
 	double media,nota2;
 	
 	printf("Digite as  nota:");
 	scanf("%lf %lf",&media,&nota2);
 
 	media=((media*3.5)+(nota2*7.5))/11;
 	
 	printf("MEDIA = %.5lf\n",media);
 }
