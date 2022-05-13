
// Esse é um programa que simula uma calculadora padrão simples


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	float soma,sub,mult,div,n1,n2;
	int valor,resto,c1, n3, n4;
	
	do{
		c1 = 0;
		
		printf ("\t\t--------------------------\n");
		printf ("\t\t|CALCULADORA MENU INICIAL|\n");
		printf ("\t\t--------------------------\n");
		printf ("Escolha a opção desejada:\n");
		printf ("\t1- Adição entre dois números\n");
		printf ("\t2- Subtração entre dois números\n");
		printf ("\t3- Multiplicação entre dois números\n");
		printf ("\t4- Divisão entre dois números\n");
		printf ("\t5- Resto da divisão entre dois números\n");
		printf ("\t6- Raiz quadrada de um número\n");
		printf ("\t7- Sair\n");
		scanf ("%d", &valor);
		
		switch (valor) 
		{
			case 1 : 
			while (c1!=2)
			{
			printf ("Você escolheu 'Adição entre dois números', digite-os: \n");
			scanf ("%f %f", &n1, &n2);
			soma = (n1+n2);
			printf ("A soma entre os dois números é: %.2f\n\n",soma);
			printf ("\tEscolha a opção desejada:\n");
			printf ("\t1- Continuar somando\n");
			printf ("\t2- Voltar\n");
			scanf ("%d", &c1);
				if (c1==2)
				{
				  printf ("Você escolheu voltar ao menu inicial.\n");
				}
			}
			break;
			case 2: 
			while (c1!=2)
			{
			printf("Você escolheu 'Subtração entre dois números', digite-os, respectivamente:\n");
			scanf ("%f %f", &n1, &n2);
			sub = (n1-n2);
			printf ("A subtração entre os dois números é: %.2f\n\n", sub);
			printf ("\tEscolha a opção desejada:\n");
			printf ("\t1- Continuar subtraindo\n");
			printf ("\t2- Voltar\n");
			scanf ("%d", &c1);
				if (c1==2)
				{
					printf ("Você escolheu voltar ao menu inicial.\n");
				}
			}
			break;
			case 3 : 
			while (c1!=2)
			{
			printf("Você escolheu 'Multiplicação entre dois números', digite-os:\n");
			scanf ("%f %f", &n1, &n2);
			mult = (n1*n2);
			printf ("A multiplicação entre os dois números é: %.2f\n\n", mult);
			printf ("\tEscolha a opção desejada:\n");
			printf ("\t1- Continuar multiplicando\n");
			printf ("\t2- Voltar\n");
			scanf ("%d", &c1);
				if (c1==2)
				{
					printf ("Você escolheu voltar ao menu inicial.\n");
				}
			}
			break;
			case 4 : 
			while (c1!=2)
			{
				do
				{
					printf("Você escolheu 'Divisão entre dois números', digite-os, respectivamente:\n");
					scanf ("%f %f", &n1, &n2);
					
					if(n2 == 0)
					{
						printf("Atenção: Divisão por Zero.\n");
					}
				}
				while (n2 == 0);
				div = (n1/n2);
				printf ("A divisão entre os dois números é: %.2f\n\n", div);
				printf ("\tEscolha a opção desejada:\n");
				printf ("\t1- Continuar dividindo\n");
				printf ("\t2- Voltar\n");
				scanf ("%d", &c1);
				if (c1==2)
				{
					printf ("Você escolheu voltar ao menu inicial.\n");
				}
			}
			break;
			case 5 : 
			while (c1!=2)
			{
				do
				{
					printf("Você escolheu 'Resto da divisão entre dois números', digite-os, respectivamente:\n");
					scanf ("%d %d", &n3, &n4);
					
					if(n4 == 0)
					{
						printf("Atenção: Divisão por Zero.\n");
					}
				}
				while(n4 == 0);
				
				resto = (n3%n4);
				printf ("O resto da divisão entre os dois números é: %d\n\n", resto);
				printf ("\tEscolha a opção desejada:\n");
				printf ("\t1- Continuar dividindo\n");
				printf ("\t2- Voltar\n");
				scanf ("%d", &c1);
				if (c1==2)
				{
					printf ("Você escolheu voltar ao menu inicial.\n");
				}
			}
			break;
			case 6 :
			while (c1!=2)
			{				
			printf("Você escolheu 'Raiz quadrada de um número', digite-o:\n");
			scanf ("%f", &n1);
			printf ("A raiz quadrada do número digitado é:%f\n",sqrt(n1));
			printf ("\tEscolha a opção desejada:\n");
			printf ("\t1- Continuar calculando raiz quadrada\n");
			printf ("\t2- Voltar\n");
			scanf ("%d", &c1);
				if (c1==2)
				{
					printf ("Você escolheu voltar ao menu inicial.\n");
				}
				
			}
			break;
			case 7 :
				printf ("Fechando o programa!\n");
				
			break;
			default :
			printf("ERRO: Valor inválido!\n");
		}	
	}
	while (valor!=7);
}
