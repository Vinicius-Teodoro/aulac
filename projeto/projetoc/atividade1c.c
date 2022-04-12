#include<stdio.h>

main(){
	float raio, circunferencia;
	 
	 printf("Qual eh o raio?");
	 scanf("%f",&raio);
	 
	 circunferencia = (raio*raio) * 3.14;
	 printf("A area da circunferencia eh: %f", circunferencia);
	 system("pause");
}
