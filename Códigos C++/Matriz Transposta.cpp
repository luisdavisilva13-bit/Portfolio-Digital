#include <stdio.h>

#define TAM 4

int main(){
	system("chcp 65001");
	int matriz[TAM][TAM];
	int transposta[TAM][TAM];
	
	//Leitura da matriz
	printf("Digite os elementos da matriz: \n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//Gerar a matriz transposta
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			transposta[j][i] = matriz[i][j];
		}
	}
	
	//Exibir matriz original
	printf("Matriz original: \n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	//Exibir matriz transposta
	printf("Matriz original: \n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}