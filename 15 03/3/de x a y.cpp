#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"Portuguese");
		int contado, num1, num2;
		printf("Escreva o primeiro numero \n");
		scanf("%d",  &num1);
		printf("Escreva o segundo numero \n");
		scanf("%d", &num2);
while (num1 < num2 + 1){

printf(", %d",num1);
num1 = num1+1;
}
	
}
