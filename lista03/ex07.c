#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	 		
	int d, i = 0;
	while(i != 4){
		printf("Digite um número qualquer, e use 4 para terminar");
		scanf("%d", &i);
		d = i * i;
	    printf("%d", d);
	}
    printf("Fim.");
	getch();
}