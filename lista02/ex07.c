#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int num1, num2, num3;
	printf("Digite um numero inteiro");
	scanf("%d", &num1);
	printf("Digite outro numero inteiro");
	scanf("%d", &num2);
	printf("Digite outro numero inteiro");
	scanf("%d", &num3);
	if (num1>num2 && num1 > num3) {
		printf("O primeiro numero é o maior");
	} else if (num2>num1 && num2 > num3) {
		printf("O segundo numero é o maior");
	} else {
		printf("O terceiro numero é o maior");
	}getch();
}