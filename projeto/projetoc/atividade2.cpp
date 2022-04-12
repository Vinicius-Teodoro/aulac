#include<stdio.h>

main(){
	int op, num1, num2;
	float  resultado;
	
printf("Escolha o operador: \n 1 = + \n 2 = - \n 3 = * \n 4 = / \n");
scanf("%d", &op);

if (op > 4){
	printf("Operador invalido");
}

printf("Digite o primeiro numero:");
scanf("%d", &num1);

printf("Digite o segundo numero:");
scanf("%d", &num2);

if (op == 1){
	resultado = num1 + num2;
	printf("O operador escolhido foi +, logo seu resultado eh: %f", resultado);
}
if (op == 2){
    resultado = num1 - num2;
	printf("O operador escolhido foi -, logo seu resultado eh: %f", resultado);
	
}
if (op == 3){
    resultado = num1 * num2;
	printf("O operador escolhido foi *, logo seu resultado eh: %f", resultado);
}
if (op == 4){
    resultado = num1 / num2;
	printf("O operador escolhido foi /, logo seu resultado eh: %f", resultado);
}

}

