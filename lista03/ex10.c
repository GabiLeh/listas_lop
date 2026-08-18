#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int acumulador = 0;
	for(int i = 1; i <= 100; i++){
		acumulador = acumulador + i;
	}
		printf("a soma dos números de 0 a 100 é = %d \n", acumulador);
		getch();
}