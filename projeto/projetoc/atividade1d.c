#include<stdio.h>
main(){
	float f, c;
	printf("Escreva a temperatura em graus celsius: ");
	scanf("%f", &c);
	f = c * 1.8 + 32;
	printf("A temperatura em Fahrenheit eh: %f ", f);
	
	if (f > 0){

	printf("A temperatura eh positiva");
	}else {
	printf("A temperatura eh negativa");
	}
	printf("\n");
	system("pause");
	

}

