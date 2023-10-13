#include <stdio.h>

// Primeira Entrada: Numero de Equipes
// Segunda Entrada: Numero indeterminado de inscrições (C, S, L) baseado no oumero de equipes
// Entrada "F" determina o fim das inscrições de uma equipe

int main()
{

    int numeroEquipes;
    int C = 0, S = 0, L = 0;
    scanf("%d", &numeroEquipes);

    for (int i = 0; i < numeroEquipes; i++)
    {
         char letra;

        while (1)
        {
            scanf("%c", &letra);

            if (letra == 'F')
            {
                break;
            }

            else if (letra == 'C')
            {
                C++;
            }
            else if (letra == 'S')
            {
                S++;
            }
            else if (letra == 'L')
            {
                L++;
            }
        }
    }
    int totalDeAtletas = C + S + L;
    printf("%d %d %d %d", C, S, L, totalDeAtletas);

    return 0;
}