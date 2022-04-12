#include<stdio.h>
#include<locale.h>


main(){
	float nota1, nota2, nota3, nota4, nota5, media;
printf("Digite a primeira nota: ");
scanf("%f",&nota1);

printf("Digite a segunda nota: ");
scanf("%f",&nota2);

printf("digite a terceira nota: ");
scanf("%f",&nota3);

printf("Digite a quarta nota: ");
scanf("%f",&nota4);

printf("Digite a quinta nota: ");
scanf("%f",&nota5);

media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
printf("A media entre: %f, %f, %f, %f e %f eh %f", nota1, nota2, nota3, nota4, nota5, media);
printf("\n");

if (media > 6){

printf("Aprovado");
}
   else{
   printf("Reprovado");
}
printf("\n");
system("pause");


}
