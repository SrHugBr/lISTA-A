#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float numero;
	printf ("digite um numero inteiro \n");
	scanf("%f", &numero);
	printf ("o antecessor do numero �: %f o sucessor do numero �: %f", numero-1,  numero+1);
	system ("pause");
	return 0;	
}

