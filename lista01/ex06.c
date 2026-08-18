#include <stdio.h>
#include <windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	int caminhao = 18;
	int alqueire = 250;
	int caminhoes, alqueires, viagens, quebrados;
	printf("Digite quantos caminhões o fazendeiro possui:\n");
	scanf(" %d", &caminhoes);
	printf("Digite quantos alqueires a fazenda possui:\n");
	scanf(" %d", &alqueires);
	viagens = (alqueires * alqueire) / (caminhoes * caminhao);
	quebrados = (alqueires * alqueire) % (caminhoes * caminhao);
	if(quebrados != 0){
		viagens = viagens + 1;
	}
	printf("Será necessário %d viagens para transportar a colheita.", viagens);
	getch();
}