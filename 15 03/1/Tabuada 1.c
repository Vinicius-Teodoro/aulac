#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, contador, multi;
	
	printf("Digite um numero");
	scanf("%D", &num1);
	
	contador = 1;
	
	while (contador < 11){
		multi = contador * num1;
		printf("%d . %d = %d \n", contador, num1, multi );
		contador= contador + 1;
		
	}
	 
	
}
