#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){
	system("chcp 65001"); //UTF-8
	int m1[TAM][TAM], m2[TAM][TAM], soma[TAM][TAM]; 
	
	//Leitura da matriz m1
	printf("Digite os elementos da matriz m1:\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("m1[%d][%d]: ", i, j);
			scanf("%d", &m1[i][j]);
		}
	}
	
	//Leitura da matriz m2
	printf("Digite os elementos da matriz m2:\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("m2[%d][%d]: ", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	//Cálculo na matriz de soma
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			soma[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	//Impressão da matriz 1 - m1
	printf("Dados da 1ª matriz (m1)\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	
	//Impressão da matriz 2 - m2
	printf("Dados da 2ª matriz (m2)\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	//Impressão da matriz de soma
	printf("Dados da 3ª matriz (soma)\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%d ", soma[i][j]);
		}
		printf("\n");
	}

	return 0;
}