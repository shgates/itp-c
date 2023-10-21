#include <stdio.h>
#include <string.h>

void maior_que_cem(int *fome, int *sede, int *banheiro, int *sono, int *tedio) {
    if (*fome > 100) {
        *fome = 100;
    }
    if (*sede > 100) {
        *sede = 100;
    }
    if (*banheiro > 100) {
        *banheiro = 100;
    }
    if (*sono > 100) {
        *sono = 100;
    }
    if (*tedio > 100) {
        *tedio = 100;
    }
}

void alerta(int *fome, int *sede, int *banheiro, int *sono, int *tedio) {
    if (*fome <= 15 && *fome > 0) {
        printf("Alerta: fome está com valor baixo\n");
    }
    if (*sede <= 15 && *sede > 0) {
        printf("Alerta: sede está com valor baixo\n");
    }
    if (*banheiro <= 15 && *banheiro > 0) {
        printf("Alerta: banheiro está com valor baixo\n");
    }
     if (*sono <= 15 && *sono > 0) {
        printf("Alerta: sono está com valor baixo\n");
    }
    if (*tedio <= 15 && *tedio > 0) {
        printf("Alerta: tédio está com valor baixo\n");
    }
}

int morreu(int *fome, int *sede, int *banheiro, int *sono, int *tedio) {
    if (*fome <= 0) {
        printf("Game Over! Morreu de fome\n");
        return 0;
    }
   else if (*sede <= 0) {
        printf("Game Over! Morreu de sede\n");
        return 0;
    }
    else if (*banheiro <= 0) {
        printf("Game Over! Morreu apertado...\n");
        return 0;
    }
    else if (*sono <= 0) {
        printf("Game Over! Morreu dormindo...\n");
        return 0;
    }
    else if (*tedio <= 0) {
        printf("Game Over! Morreu deprimido...\n");
        return 0;
    }
}

int simula_sim(int *fome, int *sede, int *banheiro, int *sono, int *tedio)
{
    char acao[20];
    scanf(" %[^\n]", acao);
    //printf("status inicial: %d %d %d %d %d \n", *fome, *sede, *banheiro, *sono, *tedio);
    //printf("%s\n",acao);
    if(strcmp("comer", acao) == 0)
    {
        *fome+= 30;
        *banheiro-= 15;
        *sede-= 5;
        *sono-= 5;
        *tedio-= 5;
      
    }
    else if(strcmp("beber", acao)==0)
    {
        *sede+= 30;
        *banheiro -= 20;
        *fome -= 5;
        *sono-= 5;
        *tedio-= 5;
      
    }
    else if(strcmp("dormir", acao)==0)
    {
        *sono += 80;
        *tedio += 30;
        *fome -= 30;
        *sede -= 30;
        *banheiro -= 30;
      
    }
    else if(strcmp("se aliviar",acao)==0)
    {
        *banheiro = 100;
        *sono -= 5;
        *tedio -= 5;
        *fome -= 5;
        *sede -= 5;
        
    }
    else if(strcmp("jogar videogame",acao)==0)
    {
        *tedio += 80;
        *fome -= 20;
        *sede -= 20;
        *banheiro -= 20;
        *sono -= 20;
        
    }
    
      //printf("status meio: %d %d %d %d %d \n", *fome, *sede, *banheiro, *sono, *tedio);
    
    maior_que_cem(fome, sede, banheiro, sono, tedio);
    int ta_vivo = morreu(fome, sede, banheiro, sono, tedio);
    
    if(ta_vivo == 0){
        return 0;
    }
    
    alerta(fome, sede, banheiro, sono, tedio);
    
     //printf("status fim: %d %d %d %d %d \n", *fome, *sede, *banheiro, *sono, *tedio);
    
    
    return 1;
}


void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio) 
{
    
    printf("Status final:\n");
    printf("Fome: %d\nSede: %d\n", fome, sede);
    printf("Banheiro: %d\n", banheiro);
    printf("Sono: %d\nTédio: %d", sono, tedio);
}

int main() {
    int fome, sede, banheiro, sono, tedio;
    int acoes;
    scanf(" %d %d %d %d %d", &fome, &sede, &banheiro, &sono, &tedio);
    scanf(" %d", &acoes);
    
    for(int i=0; i<acoes; i++) {
        int vivo = simula_sim(&fome, &sede, &banheiro, &sono, &tedio);
        if(vivo == 0) {
            break;
        }
    }
    
    imprime_relatorio(fome, sede, banheiro, sono, tedio);
    return 0;
}