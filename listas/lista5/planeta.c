#include <stdio.h>

void calculatePlanetMatrix(int aquatico, int desertico, int selvagem, int inospito, int areaTotal)
{

    if ((aquatico / (float)areaTotal) >= 0.5 && (selvagem / (float)areaTotal) >= 0.2)
    {
        printf("Planeta Classe M");
    }
    else if (aquatico / (float)areaTotal >= 0.85)
    {
        printf("Planeta Aquático");
    }
    else if (desertico / (float)areaTotal >= 0.6)
    {
        printf("Planeta Desértico");
    }
    else if (selvagem / (float)areaTotal >= 0.65)
    {
        printf("Planeta Selvagem");
    }
    else
    {
        printf("Planeta Inóspito");
    }
}

int main()
{

    int n, m;
    int hostil = 0,
        aquatico = 0,
        desertico = 0,
        selvagem = 0,
        inospito = 0,
        areaTotal = 0;

    scanf("%d %d", &n, &m);
    char planet[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &planet[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (planet[i][j] == 'X')
            {
                hostil++;
            }
            else if (planet[i][j] == '~')
            {
                aquatico++;
                areaTotal++;
            }
            else if (planet[i][j] == '^')
            {
                desertico++;
                areaTotal++;
            }
            else if (planet[i][j] == '*')
            {
                selvagem++;
                areaTotal++;
            }
            else if (planet[i][j] == '.')
            {
                inospito++;
                areaTotal++;
            }
            else
            {
                return 0;
            }

            if (hostil == 1)
            {
                printf("Planeta Hostil");
                return 0;
            }
        }
    }

    calculatePlanetMatrix(aquatico, desertico, selvagem, inospito, areaTotal);

    return 0;
}