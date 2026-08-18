#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	printf("Informe um valor inteiro:");
	scanf("%d", &num);
	if(num > 0) {
		printf("Numero Positivo\n");
	} else if (num < 0) {
		printf("Numero Negativo\n");
	} else {
		printf("Numero igual a zero\n");
	} getch();
}