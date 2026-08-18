#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int idade;
	printf("Informe sua idade:");
	scanf("%d", &idade);
	if(idade >= 18) {
		printf("adulto \n");
	} else if (idade > 12) {
		printf("adolescente \n");
	} else {
		printf("criança\n");
	}getch();
}