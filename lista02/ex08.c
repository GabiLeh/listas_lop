#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	float valor, p5, p10, valorfinal;
	printf("Digite o valor do produto");
	scanf(" %f", &valor);
	if (valor > 500) {
		p10=valor*10/100;
		valorfinal= valor - p10;
		printf("O preço final é %.2f", valorfinal);
	} else if (valor>200) {
	    p5= valor * 5/100;
	    valorfinal = valor-p5;
	    printf("O preço final é %.2f", valorfinal);
	} else {
		valorfinal = valor;
		printf("O preço final é %.2f", valorfinal);
	}getch();
}