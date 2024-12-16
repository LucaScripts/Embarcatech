/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 
   Cálculo do fatorial de um número.
*/

#include <stdio.h>

int calc_fat(int);

int main()
{
    int numero = 5;
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero , num_fat);
    printf("Estamos em um novo RAMO do Git.");
    printf("Mais uma alteração.");
    return 0;
}


;
/* Definição da funcao fatorial */
int calc_fat(int b)
{
    int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d",fatorial);
    }
    return fatorial;
}

