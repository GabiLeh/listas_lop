#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int id;
	printf("Informe sua idade:");
	scanf("%d", &id);
	if(id >= 16) {
		printf("Pode votar \n");
	} else if (id < 16) {
		printf("Não pode votar\n");
	}getch();
}