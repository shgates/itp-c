#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int alunos[n];
    float notas[n];

    int contador_aprovados, contador_recuperacao, contador_reprovados = 0;

    for (int i = 0; i < n; i++)
    {
        if (notas[i] >= 7.00)
        {
            contador_aprovados++;
        } else if(notas[i] < 7.00 && notas[i] >= 5.00) {
            contador_recuperacao;
        } else {
            contador_reprovados;
        }
    }

    int aprovados[contador_aprovados]; int recuperacao[contador_recuperacao]; int reprovados[contador_reprovados];

    for (int i = 0; i < n; i++)
    {
        scanf("%d - %f", &alunos[i], &notas[i]);
    }
    





    
    for (int i = 0; i < n; i++)
    {
        if (notas[i] >= 7.00)
        {
            printf("%d (%.1lf)", alunos[i], notas[i]);
            if (i != n - 1)
            {
                printf(", ");
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (notas[i] < 7.00 && notas[i] >= 5.00)
        {
            printf("%d (%.1lf)", alunos[i], notas[i]);
            if (i != n - 1)
            {
                printf(", ");
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (notas[i] < 5.00)
        {
            printf("%d (%.1lf)", alunos[i], notas[i]);
            if (i != n - 1)
            {
                printf(", ");
            }
        }
    }


    printf("Aprovados:");


    printf("\nRecuperação:");


    printf("\nReprovados:");

    
    return 0;
}