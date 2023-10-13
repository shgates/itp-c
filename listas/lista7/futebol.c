#include <stdio.h>
#include <string.h>

struct Time {
   char nome[200];
   int pontos;
   int total_partidas;
   int vitorias;
   int empates;
   int derrotas;
   int gols_feitos;
   int gols_sofridos;
   int gols_saldo;
};

void printarTabela(struct Time times[], int qnt_times)
{
    struct Time libertadores[6];
    struct Time rebaixamento[4];
    
    for(int i=0;i<6;i++)
    {
        libertadores[i] = times[i];
    }
    
    for(int i=0;i<4;i++)
    {
        rebaixamento[i] = times[qnt_times - 1 - i];
    }
    
    printf("Tabela do campeonato:\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for(int i=0;i<qnt_times;i++)
    {
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n",
                times[i].nome, times[i].pontos, times[i].total_partidas, times[i].vitorias, times[i].empates,
                times[i].derrotas, times[i].gols_feitos, times[i].gols_sofridos, times[i].gols_saldo);
    }
    
}




int main(){
    int qnt_times;
    scanf("%d",&qnt_times);
    
    printf("%d", qnt_times);
    
    struct Time times[20];
    
    for(int i=0;i<qnt_times;i++)
    {
        char nome[200];
        int pontos, total_partidas, vitorias, empates, derrotas,
        gols_feitos, gols_sofridos, gols_saldo;
        scanf("%s; %d %d %d %d %d",
        nome,&vitorias,&empates,&derrotas,
        &gols_feitos,&gols_sofridos);
        gols_saldo = gols_feitos - gols_sofridos;
    
        pontos = 3 * vitorias + empates;
        total_partidas = vitorias+empates+derrotas;
        struct Time t;
        strcpy(t.nome, nome);
        t.pontos = pontos;
        t.total_partidas = total_partidas;
        t.vitorias = vitorias;
        t.empates = empates;
        t.derrotas = derrotas;
        t.gols_feitos = gols_feitos;
        t.gols_sofridos = gols_sofridos;
        t.gols_saldo = gols_saldo;
        times[i] = t;
        
    }
    
    // bubblesort
    for(int i = 0; i< qnt_times-1;i++)
    {
        struct Time temp;
        for(int j = 0; i<qnt_times -1 - i; j++)
        {
            if(times[j].pontos < times[j+1].pontos)
            {
                temp = times[j+1];
                times[j+1] = times[j];
                times[j] = temp;
            }
            if(times[j].pontos == times[j+1].pontos)
            {
                if(times[j].vitorias < times[j+1].vitorias)
                {
                    temp = times[j+1];
                    times[j+1] = times[j];
                    times[j] = temp;
                }
                if(times[j].vitorias == times[j+1].vitorias)
                {
                    struct Time temp;
                    if(times[j].gols_saldo < times[j+1].gols_saldo)
                    {
                        temp = times[j+1];
                        times[j+1] = times[j];
                        times[j] = temp;
                    }
                }
            }
        }
    }
    
    printarTabela(times, qnt_times);
    
    return 0;
}