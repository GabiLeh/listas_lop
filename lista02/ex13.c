#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	float nota;
	printf("Informe sua nota:");
	scanf("%f", &nota);
	if(nota >= 7) {
		printf("aprovado \n");
	} else if (nota >= 5) {
		printf("Recuperação\n");
	} else {
		printf("Reprovado");
	}getch();
}