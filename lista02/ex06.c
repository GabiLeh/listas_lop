#include <stdio.h>
void main (){
	char nome[20];
	int pontos;
	printf("Digite o nome do seu time\n");
	scanf(" %s", &nome);
	printf("Digite o número de pontos\n");
	scanf("%d", &pontos);
	if (pontos >= 20) {
		printf("classificado");
	} else if (pontos>=10) {
		printf("em disputa");
	} else {
		printf("eliminado");
	}
	getch();
}