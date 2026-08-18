#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int vetor[25];
	int i;
	srand(time(NULL));
	for(i = 0; i < 25; i++){
		vetor[i] = rand () % 101;
		printf("%d\n", vetor[i]);
	}
	getch();
}