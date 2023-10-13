#include <stdio.h>
#define MODULO(x) ((x)>=0?(x):-(x))

int somarDivisoresProprios(int n)
{
    int c = 0;
    int soma = 0;
    int divisores[50];

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            divisores[c] = i;
            c++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        soma = soma + divisores[i];
    }

    return soma;
}

int numerosSaoColegas(int n1, int n2, int soma1, int soma2)
{

    if (MODULO(soma1 - n2) <= 2 && MODULO(soma2 - n1) <= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int n1, n2, soma1, soma2, saoColegas;

    scanf("%d %d", &n1, &n2);

    soma1 = somarDivisoresProprios(n1);
    soma2 = somarDivisoresProprios(n2);

    saoColegas = numerosSaoColegas(n1, n2, soma1, soma2);

    if (saoColegas)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    return 0;
}