#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int vet[10];
	int soma;
	int maior, menor, i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o %do numero inteiro: ", i + 1);
	    scanf("%d", &vet[i]);
	}
	
	maior = menor = vet[0];
	
	for(i = 0; i < 10; i++)
	{
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
		if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}
	
	soma = vet[0] + vet[1] + vet[2] + vet[3] + vet[4] + vet[5] + vet[6] + vet[7] + vet[8] + vet[9];
	
	float media = soma / 10;
	
	printf("\nResultados:\n");
	printf("Media: %.2f\n", media);
	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);

	system("pause");
}