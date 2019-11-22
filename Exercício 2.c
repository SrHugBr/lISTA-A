#include<stdio.h>
#include<stdlib.h>
 
 void main()
 
{
	char nome[80];
	char idade[5];
	printf ("Digite sue nome: \n");
	scanf("%s" , &nome);
	printf("\n%s" , nome);
	printf (" Digite sua idade: \n");
	scanf("%s",&idade); 
	printf("\n%s" , idade);
	system ("pause");
	return 0;
  }  
