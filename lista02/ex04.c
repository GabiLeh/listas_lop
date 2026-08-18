#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int num, num2;
	printf("Digite um número");
	scanf("%d", &num);
	printf("Digite outro numero");
	scanf("%d", &num2);
	if (num > num2) {
		printf("O primeiro numero é maior que o segundo numero");
	} else if (num2 > num){
		printf ("O segundo numero é maior que o primeiro");
	} else{
		printf("Os numeros sao iguais");
	}getch();
}