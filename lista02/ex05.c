#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	float salario, reajuste10, reajuste15;
	printf("Digite o seu salário\n");
	scanf("%f",&salario);
	if (salario > 1800) {
		reajuste15=salario*15/100;
		salario = salario + reajuste15;
		printf("Seu novo salario é %.2f", salario);
	} else if ( salario < 1800) {
		reajuste10 = salario*10/100;
		salario = salario + reajuste10;
		printf("Seu novo salario é %.2f", salario);
	}getch();
	
}