#include <stdio.h>
#include <windows.h>
int main (){
	SetConsoleOutputCP(CP_UTF8);
	char turno;
	printf("Informe se seu turno é M, V ou N:");
	scanf("%c", &turno);
	if (turno=='M'||turno=='m') {
		printf("Bom dia");
	} else if (turno=='V'||turno=='v') {
		printf("Boa tarde");}
		else if (turno=='N'||turno=='n'){
			printf("Boa noite");}
		else {
		printf("Turno inválido");
		}getch();
		}