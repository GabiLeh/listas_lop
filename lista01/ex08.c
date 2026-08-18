#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	char nome[20];
	float p, aumento, np;
	printf("Digite o nome da mercadoria");
	scanf(" %s", &nome);
	printf("Digite o preço");
	scanf(" %f", &p);
	printf("Digite o reajuste");
	scanf( " %f", &aumento);
	np = p + p * aumento / 100;
	printf(" o valor de %s é de %.2f", nome, np);
	getch();
}