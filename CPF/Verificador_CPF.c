
// Este é um programa que verifica se o CPF inserido é válido ou não


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
 
int main(){
   
    setlocale (LC_ALL, "Portuguese");
   
   	int ppl, n, n2, mult, mult2, c1, valor;
   	
   	
   
    printf ("\t\t\t--------------------\n");
    printf ("\t\t\t|VERIFICADOR DE CPF|\n");
    printf ("\t\t\t--------------------\n\n");
   
    printf ("Digite o número de pessoas que deseja verificar o CPF: ");
    scanf ("%d", &ppl);
   
	char cpfs[11][ppl];
	int cpfs_int[11][ppl];
	char nomes[50][ppl];
   
    for (n=0; n<ppl; n++){
       
        fflush(stdin);
 
        printf ("\nDigite o nome da Pessoa %d: ", n+1);
        gets (nomes[n]);
       
        fflush(stdin);
 
        printf ("\nDigite o CPF da Pessoa %d: ", n+1);
        gets (cpfs[n]); 
		
			       
       	for(n2 = 0; n2 < 11; n2++)
       	{
       		cpfs_int[n][n2] = cpfs[n][n2] - 48;
		}

        mult = ((cpfs_int[n][0]*10) + (cpfs_int[n][1]*9) + (cpfs_int[n][2]*8) + (cpfs_int[n][3]*7) + (cpfs_int[n][4]*6) + (cpfs_int[n][5]*5) + (cpfs_int[n][6]*4) + (cpfs_int[n][7]*3) + (cpfs_int[n][8]*2));
        mult = (mult*10);
        mult = (mult%11);
        
           
        mult2 = ((cpfs_int[n][0]*11) + (cpfs_int[n][1]*10) + (cpfs_int[n][2]*9) + (cpfs_int[n][3]*8) + (cpfs_int[n][4]*7) + (cpfs_int[n][5]*6) + (cpfs_int[n][6]*5) + (cpfs_int[n][7]*4) + (cpfs_int[n][8]*3) + (cpfs_int[n][9]*2));
		mult2 = (mult2*10);
        mult2 = (mult2%11);   
       
        
        if (mult2 == 10){
        	mult2 = 0;
        }
		 
        if (mult2 == cpfs_int[n][10] && mult == cpfs_int[n][9]){
       
        
        printf ("--------------------------------------------------------------------------\n");
		printf ("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d de %s é Válido!\n", cpfs_int[n][0], cpfs_int[n][1], cpfs_int[n][2], cpfs_int[n][3], cpfs_int[n][4], cpfs_int[n][5], cpfs_int[n][6], cpfs_int[n][7], cpfs_int[n][8], cpfs_int[n][9], cpfs_int[n][10],  nomes[n]);
        printf ("--------------------------------------------------------------------------\n");
        
        }
        if (mult2 != cpfs_int[n][10] || mult != cpfs_int[n][9]){
       
        printf ("--------------------------------------------------------------------------\n");
		printf ("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d de %s é Inválido!\n", cpfs_int[n][0], cpfs_int[n][1], cpfs_int[n][2], cpfs_int[n][3], cpfs_int[n][4], cpfs_int[n][5], cpfs_int[n][6], cpfs_int[n][7], cpfs_int[n][8], cpfs_int[n][9], cpfs_int[n][10],  nomes[n]);            
        printf ("--------------------------------------------------------------------------\n");
        
    	}
    }
    
    
	do{
		c1 = 0;
		
		printf ("Escolha a opção desejada:\n");
		printf ("\t1- Voltar\n");
		printf ("\t2- Sair\n");
		scanf ("%d", &valor);
		
		switch (valor)
		{
			case 1 :
			while (c1!=2)
			{
	
    printf ("Digite o número de pessoas que deseja verificar o CPF: ");
    scanf ("%d", &ppl);
   
	char cpfs[11][ppl];
	int cpfs_int[11][ppl];
	char nomes[50][ppl];
   
    for (n=0; n<ppl; n++){
       
        fflush(stdin);
 
        printf ("\nDigite o nome da Pessoa %d: ", n+1);
        gets (nomes[n]);
       
        fflush(stdin);
 
        printf ("\nDigite o CPF da Pessoa %d: ", n+1);
        gets (cpfs[n]); 
		
			       
       	for(n2 = 0; n2 < 11; n2++)
       	{
       		cpfs_int[n][n2] = cpfs[n][n2] - 48;
		}

        mult = ((cpfs_int[n][0]*10) + (cpfs_int[n][1]*9) + (cpfs_int[n][2]*8) + (cpfs_int[n][3]*7) + (cpfs_int[n][4]*6) + (cpfs_int[n][5]*5) + (cpfs_int[n][6]*4) + (cpfs_int[n][7]*3) + (cpfs_int[n][8]*2));
        mult = (mult*10);
        mult = (mult%11);
        
           
        mult2 = ((cpfs_int[n][0]*11) + (cpfs_int[n][1]*10) + (cpfs_int[n][2]*9) + (cpfs_int[n][3]*8) + (cpfs_int[n][4]*7) + (cpfs_int[n][5]*6) + (cpfs_int[n][6]*5) + (cpfs_int[n][7]*4) + (cpfs_int[n][8]*3) + (cpfs_int[n][9]*2));
		mult2 = (mult2*10);
        mult2 = (mult2%11);   
       
        
        if (mult2 == 10){
        	mult2 = 0;
        }
		 
        if (mult2 == cpfs_int[n][10] && mult == cpfs_int[n][9]){
       
        
        printf ("--------------------------------------------------------------------------\n");
		printf ("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d de %s é Válido!\n", cpfs_int[n][0], cpfs_int[n][1], cpfs_int[n][2], cpfs_int[n][3], cpfs_int[n][4], cpfs_int[n][5], cpfs_int[n][6], cpfs_int[n][7], cpfs_int[n][8], cpfs_int[n][9], cpfs_int[n][10],  nomes[n]);
        printf ("--------------------------------------------------------------------------\n");
        
        }
        if (mult2 != cpfs_int[n][10] || mult != cpfs_int[n][9]){
       
        printf ("--------------------------------------------------------------------------\n");
		printf ("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d de %s é Inválido!\n", cpfs_int[n][0], cpfs_int[n][1], cpfs_int[n][2], cpfs_int[n][3], cpfs_int[n][4], cpfs_int[n][5], cpfs_int[n][6], cpfs_int[n][7], cpfs_int[n][8], cpfs_int[n][9], cpfs_int[n][10],  nomes[n]);            
        printf ("--------------------------------------------------------------------------\n");
        
        
			}
			
    	}
    	
    	printf ("\tEscolha a opção desejada:\n");
			printf ("\t1- Voltar\n");
			printf ("\t2- Sair\n");			
			scanf ("%d", &c1);
			
			if (c1 == 2){
				printf ("Fechando o programa!\n");
				exit( 1 );
    }
			}
		break;
		case 2 :
			printf ("Fechando o programa!\n");
				
			break;
			default :
			printf("ERRO: Valor inválido!\n");	
	
		}
    }
    while (valor!=2);
}
