#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char time[50];
	int v, e, pontos;
	printf("Digite o nome do time:\n");
	scanf(" %[^\n]", &time);
	printf("Digite o número de vitórias:\n");
	scanf(" %d", &v);
	printf("Digite o número de empates:\n");
	scanf(" %d", &e);
	pontos = v * 3 + e;
	printf("O time %s fez %d pontos.", time, pontos);
	getch();
}