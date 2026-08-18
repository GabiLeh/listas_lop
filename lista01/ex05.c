#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número inteiro\n");
	scanf(" %d", &n);
	printf("n + 1 = %d/nn- 1 = %d", n + 1, n - 1);
	getch();
}