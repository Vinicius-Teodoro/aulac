#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"Portuguese");
	int contador, resto;
	contador = 1;
	while (contador < 101){
	resto = contador % 2;
	if (resto == 0 ){
	
	printf(" %d",contador);
}
	contador = contador + 1;
}
}
