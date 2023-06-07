#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularsoma(int nota1, int nota2)
{

    int soma = 0;
    soma = nota1 + nota2;
    printf("soma:%d \n", soma);

    if (nota1 > nota2)
    {
        printf("numero maior %d", nota1, "e maioir que %d", nota2);
    }
    else
    {
        printf("numero maior %d", nota2, "e maioir que %d", nota1);
    }
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1, numero2, soma;

    printf("digite um numero:");
    scanf("%d", &numero1);

    printf("digite um numero:");
    scanf("%d", &numero2);
    soma = 0;
     soma = calcularsoma(numero1, numero2);
return 0;
}
