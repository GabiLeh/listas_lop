#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	char nome[20];
	float eleitores, votos;
	float porcentagem;
	printf("Digite o nome da cidade");
	scanf("%s", &nome);
	printf("Digite o número de eleitores");
	scanf("%f", &eleitores);
	printf("Digite o número de votos");
	scanf("%f", &votos);
	porcentagem = (votos * 100) / eleitores;
	printf("A porcentagem de votos é de %.2f", porcentagem);
	getch();
}