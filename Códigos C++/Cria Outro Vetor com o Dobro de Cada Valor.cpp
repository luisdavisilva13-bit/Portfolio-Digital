#include <stdio.h>
#include <stdlib.h>

int main(){
	system("chcp 65001");
	int n, i;
	int *vetor, *dobro;
		
	printf("Digite a quantidade de elementos (N): ");
	scanf("%d", &n);
	
	vetor = (int*) malloc(n * sizeof(int));
	dobro = (int*) malloc(n * sizeof(int));
	
	if(vetor == NULL || dobro == NULL){
		printf("Erro de alocação de mémoria!\n");
		return 1;
	}
	
	for(i = 0; i < n; i++){
		printf("Digite o %do número inteiro: ", i + 1);
		scanf("%d", &vetor[i]);
		dobro[i] = vetor[i] * 2;
	}
	
	printf("\nVetor original: ");
	for(i = 0; i < n; i++){
		printf("%d", vetor[i]);
		if(i < n - 1) printf(" ");
	}
	
	printf("\nVetor com dobro: ");
	for(i = 0; i < n; i++){
		printf("%d", dobro[i]);
		if(i < n - 1) printf(" ");
	}
	
	printf("\n");
	
	free(vetor);
	free(dobro);
	
	system("pause");
	return 0;
}