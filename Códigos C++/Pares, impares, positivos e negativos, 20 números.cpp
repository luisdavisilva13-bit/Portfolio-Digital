#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int entrada[20];
	int pares[20] = {0};
	int impares[20] = {0};
	int positivos[20] = {0};
	int negativos[20] = {0};
	
	int i, p = 0, im = 0, pos = 0, neg = 0;
	
	printf("Digite 20 numeros inteiros:\n");
	for(i = 0; i < 20; i++){
		printf("Numero %d: ", i + 1);
		scanf("%d", &entrada[i]);
		
		if(entrada[i] % 2 == 0)
		pares[p++] = entrada[i];
		else
		impares[im++] = entrada[i];
		
		if(entrada[i] > 0)
		positivos[pos++] = entrada[i];
		else if(entrada[i] < 0)
		negativos[neg++] = entrada[i];
	}
	
	printf("\nVetor de pares: ");
	for(i = 0; i < 20; i++) {
	printf("%d", pares[i]);
	if(i < 19) printf(" ");
    }
	
	printf("\nVetor de impares: ");
	for(i = 0; i < 20; i++) {
	printf("%d", impares[i]);
	if(i < 19) printf(" ");
    }
    
	printf("\nVetor de positivos: ");
	for(i = 0; i < 20; i++) {
	printf("%d", positivos[i]);
	if(i < 19) printf(" ");
    }
    
	printf("\nVetor de negativos: ");
	for(i = 0; i < 20; i++) {
	printf("%d", negativos[i]);
	if(i < 19) printf(" ");
    }
    
	printf("\n");
	
	system("pause");
}