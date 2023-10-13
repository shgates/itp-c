#include <stdio.h>
#include <string.h>

struct Jogada
{
    int X;
    int Y;
    char c;
};

int verificarVitoria(char tabuleiro[][3], char c)
{
    
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == c && tabuleiro[i][1] == c && tabuleiro[i][2] == c)
            return 1; 

        if (tabuleiro[0][i] == c && tabuleiro[1][i] == c && tabuleiro[2][i] == c)
            return 1;
    }

   
    if (tabuleiro[0][0] == c && tabuleiro[1][1] == c && tabuleiro[2][2] == c)
        return 1; 

    if (tabuleiro[0][2] == c && tabuleiro[1][1] == c && tabuleiro[2][0] == c)
        return 1; 

    return 0; 
}

int jogadaValida(char tabuleiro[][3], int X, int Y)
{
    if (X < 0 || X >= 3 || Y < 0 || Y >= 3 || tabuleiro[X][Y] != '.')
    {
        return 0;
    }
    return 1;
}

void testarJogada(char tabuleiro[][3], int X, int Y, char c)
{

    char temp_tabuleiro[3][3];
    memcpy(temp_tabuleiro, tabuleiro, sizeof(temp_tabuleiro));

    if (!jogadaValida(temp_tabuleiro, X, Y))
    {
        printf("Jogada inválida!\n");
    }
    else
    {
        temp_tabuleiro[X][Y] = c;

        if (verificarVitoria(temp_tabuleiro, c))
        {
            printf("Boa jogada, vai vencer!\n");
        }
        else
        {
           printf("Continua o jogo.\n");
        }
    }
}

void testarTodasJogadas(char tabuleiro[][3], struct Jogada jogadas[], int n)
{
 
    for (int i = 0; i < n; i++)
    {
        struct Jogada j = jogadas[i];
        testarJogada(tabuleiro, j.X, j.Y, j.c);
    }
}

int main()
{

    char tabuleiro[3][3];
    int n, X, Y;

    for (int i = 0; i < 3; i++)
    {
        scanf(" %c %c %c", &tabuleiro[i][0], &tabuleiro[i][1], &tabuleiro[i][2]);
    }

    scanf("%d", &n);

    struct Jogada jogadas[n];

    for (int i = 0; i < n; i++)
    {
        struct Jogada jogada;
        scanf("%d %d %c", &X, &Y, &jogada.c);
        jogada.X = X-1;
        jogada.Y = Y-1;
        
        jogadas[i] = jogada;
    }
    
    testarTodasJogadas(tabuleiro, jogadas, n);

    return 0;
}