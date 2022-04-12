#include<stdio.h>

main(){
	float altura, largura, area;
	printf("Qual eh a altura?");
	scanf("%f", &altura);
	
	printf("Qual eh a largura?");
	scanf("%f", &largura);
	
	area = (altura * largura) / 2;
	
	printf("A area do triangulo eh: %f metros", area);
	
    system("pause");
}

