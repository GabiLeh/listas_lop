#include <stdio.h>
void main (){
	int num;
	printf("Informe um valor inteiro:");
	scanf("%d", &num);
	if(num > 100) {
		printf("Numero  maior que 100 \n");
	} else if (num < 100) {
		printf("Numero menor que cem\n");
	} else {
		printf("Numero igual a 100\n");
	}getch();
}