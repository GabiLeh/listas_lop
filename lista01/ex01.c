#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	//Variáveis
	int a, b, c, d;
	//Entrada
	printf("Digite três números inteiros:\n");
	scanf("%d %d %d", &a, &b, &c);
	//Processamento
	d = (a + b) / c;
	//Saída
	printf("(a + b) / c = %d", d);
	getch();
}