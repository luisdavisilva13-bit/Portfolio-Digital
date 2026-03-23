#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num[5], s, m;
	printf("\nEntre com 5 (cinco) numeros: ");
	
	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);
	scanf("%d", &num[3]);
	scanf("%d", &num[4]);
	
	s = num[0] + num[1] + num[2] + num[3] + num[4];
	
	m = s / 5; 
	
	printf("media = %d \n", m);
	
	if (num[0] > m)
	    printf("%d -> maior que a media \n", num[0]);
	    else
	    printf("%d -> menor que a media \n", num[0]);
		
	if (num[1] > m)
	    printf("%d -> maior que a media \n", num[1]);
	    else
	    printf("%d -> menor que a media \n", num[1]);	
		
	if (num[2] > m)
	    printf("%d -> maior que a media \n", num[2]);
	    else
	    printf("%d -> menor que a media \n", num[2]);	
		
	if (num[3] > m)
	    printf("%d -> maior que a media \n", num[3]);
	    else
	    printf("%d -> menor que a media \n", num[3]);	
		
	if (num[4] > m)
	    printf("%d -> maior que a media \n", num[4]);
	    else
	    printf("%d -> menor que a media \n", num[4]);	
		
	system("pause");
}