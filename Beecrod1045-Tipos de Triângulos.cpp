#include<stdio.h>
#include<math.h>

int main(){
	double numerosN[3],numeros[3];
	int I;
	
	for(I=0;I<3;I++){
		
		scanf("%lf",&numerosN[I]);
		
	}
		if(numerosN[0]>numerosN[1] && numerosN[0]>numerosN[2]){
			numeros[0]=numerosN[0];
			
			if(numerosN[1]>numerosN[2]){
				numeros[1]=numerosN[1];
				numeros[2]=numerosN[2];
				
			}else{
				
				numeros[2]=numerosN[1];
				numeros[1]=numerosN[2];
			}
			
	}else if(numerosN[1]>numerosN[0] && numerosN[1]>numerosN[2]){
		numeros[0]=numerosN[1];
			if(numerosN[0]>numerosN[2]){
				
				numeros[1]=numerosN[0];
				numeros[2]=numerosN[2];
				
			}else{
				
				numeros[2]=numerosN[0];
				numeros[1]=numerosN[2];
			}
		
	}else{
		numeros[0]=numerosN[2];
			if(numerosN[0]>numerosN[1]){
				
				numeros[1]=numerosN[0];
				numeros[2]=numerosN[1];
				
			}else{
				
				numeros[2]=numerosN[0];
				numeros[1]=numerosN[1];
			}
		
	}
	
	
	
	if(numeros[0]+numeros[1]<=numeros[2] || numeros[0]+numeros[2]<=numeros[1] || numeros[2]+numeros[1]<=numeros[0]) {
	
		printf("NAO FORMA TRIANGULO\n");
	}
	
	else{
		if(pow(numeros[0],2) == pow(numeros[1],2)+pow(numeros[2],2)) printf("TRIANGULO RETANGULO\n");

		if(pow(numeros[0],2)>pow(numeros[1],2)+pow(numeros[2],2)) printf("TRIANGULO OBTUSANGULO\n");
	
		if(pow(numeros[0],2)<pow(numeros[1],2)+pow(numeros[2],2)) printf("TRIANGULO ACUTANGULO\n");
	
		if(numeros[0]==numeros[1] &&numeros[0]==numeros[2]) printf("TRIANGULO EQUILATERO\n");
	
		if((numeros[0]== numeros[1] && numeros[0] != numeros[2]) || (numeros[0]==numeros[2] && numeros[0] != numeros[1]) ||(numeros[1]==numeros[2] && numeros[1] != numeros[0])) printf("TRIANGULO ISOSCELES\n");
	}
	
	
	
	
}
