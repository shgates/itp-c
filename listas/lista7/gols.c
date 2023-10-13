#include <stdio.h>
#include <string.h>

struct Time {
    char nome[20];
    int gols_marcados;
    int gols_sofridos;
};

void bubbleSortScore(struct Time *t, int qnt_times)
{
    for(int i=0; i<qnt_times-1;i++)
    {
        struct Time temp;
        for(int j=0;j<qnt_times-1-i;j++)
        {
            if(t[j].gols_marcados < t[j+1].gols_marcados)
            {
                temp = t[j+1];
                t[j+1] = t[j];
                t[j] = temp;
            }
        }
    }
}

int main() {
    int qnt_times;
    scanf("%d", &qnt_times);
    struct Time times[qnt_times];
    
    for(int i=0;i<qnt_times;i++)
    {
        struct Time t;
        char nome[20];
        int gols_marcados, gols_sofridos;
        scanf(" %99[^\n]", nome);
        scanf("%d", &gols_marcados);
        scanf("%d", &gols_sofridos);
        
        strcpy(t.nome, nome);
        t.gols_marcados = gols_marcados;
        t.gols_sofridos = gols_sofridos;
        times[i] = t;
    }
    
    bubbleSortScore(times, qnt_times);
    
    for(int i=0;i<qnt_times;i++)
    { 
        if(i >0)
        {
            printf("\n");
        }
        struct Time t = times[i];
        printf("%d - %s\n", i+1, t.nome);
        printf("Gols marcados: %d\n", t.gols_marcados);
        printf("Gols sofridos: %d",t.gols_sofridos);
    }
    
    return 0;
}