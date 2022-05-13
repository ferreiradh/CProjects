
// Esse é um programa para verificar se as medidas inseridas são de um triângulo ou não e para classificá-lo como equilátero, isósceles ou escaleno

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
    float l1, l2, l3;

    printf("Digite o valor de cada lado:");
    scanf("%f %f %f",&l1,&l2,&l3); 
    if (((l2-l3<l1)&&(l1<l2+l3))&&((l3-l1<l2)&&(l2<l3+l1))&&((l1-l2<l3)&&(l3<l2+l1))){
    printf ("Estes valores formam um triângulo\n");
    if (l1==l2 && l2==l3)
    printf ("Este é um triângulo Equilátero\n");
    else if (l1==l2 || l1==l3 || l2==l3)
    printf ("Este é um triângulo Isósceles\n");
    else if (l1 != l2 && l1 != l3 && l3 != l2)
    printf ("Este é um triângulo Escaleno\n");

}
    else
      printf ("Estes valores não formam um triângulo\n");
}
