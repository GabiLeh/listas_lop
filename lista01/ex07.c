#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	float r, h, v, a, pi;
	pi = 3.14;
	printf("Digite o raio");
	scanf(" %f", &r);
	printf("Digite a altura");
	scanf(" %f", &h);
	a = 2 * pi * r * ( h + r );
	v = (pi * r) * (pi * r) * h;
	printf("O valor da área é de %f e o valor do volume é de %f", a, v);
	getch();
}