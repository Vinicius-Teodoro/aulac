#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int ang1, ang2, ang3, maior;
	
	printf("Digite o primeiro �ngulo \n");
	scanf("%d", &ang1);
	
	printf("Digite o primeiro �ngulo \n");
	scanf("%d", &ang2);
	
	printf("Digite o primeiro �ngulo \n");
	scanf("%d", &ang2);
	
	if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
	printf("O seu tri�ngulo � ret�ngulo ");	
	}
	if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
	printf("O seu tri�ngulo � Act�ngulo");	
	}
	if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
	printf("O seu tri�ngulo � obtus�ngulo");
	
	system("pause");
	
}
}



