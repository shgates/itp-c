#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor)
{
    int valor_aposta = 0;
    if ('G' == cor)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j < largura/3)
                {
                    
                    valor_aposta += bandeira[i][j];
                }
            }
        }
    }
    else if ('Y' == cor)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j >= largura/3 && j < largura * 2/3)
                {
                    
                    valor_aposta += bandeira[i][j];
                }
            }
        }
    }
    else if ('R' == cor)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j >= largura * 2/3 )
                {
                   
                    valor_aposta += bandeira[i][j];
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return valor_aposta;
}

int main()
{
    char cor;
    int largura, altura, valor_inicial;
    scanf("%d %d %c", &largura, &valor_inicial, &cor);

    altura = largura * 2 / 3;
    
    int bandeira[altura][largura];

    int count = 0;
    count = largura / 3;
    int flagCount = 0;
    for (int i = 0; i < altura; i++)
    {
        int valor = valor_inicial + 1;
        for (int j = 0; j < largura; j++)
        {
            bandeira[i][j] = valor;
            flagCount++;
            if (flagCount == count)
            {
                valor++;
                flagCount = 0;
            }
        }
    }

    int valor_aposta = calcular_aposta(largura, altura, bandeira, cor);
    
    printf("%d", valor_aposta);
    return 0;
}