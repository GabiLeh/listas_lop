#include <stdio.h>
void main (){
	int nota1, nota2, nota3, notafinal, m;
	printf("Digite a primeira nota   ");
	scanf("%d", &nota1);
	printf("Digite a segunda nota    ");
	scanf("%d", &nota2);
	printf("Digite a terceira nota   ");
	scanf("%d", &nota3);
	notafinal = nota1 + nota2 + nota3;
	m = notafinal / 3;
	if (m >= 7){
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}getch();
	
}