#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[51];
    int idade;
    char genero;
};

struct Pessoa criar(char nome[], int idade, char genero)
{
    struct Pessoa p;
    strcpy(p.nome, nome);
    p.idade = idade;
    p.genero = genero;
    
    return p;
}

int inserir(struct Pessoa p, struct Pessoa *pessoas, int num_pessoas)
{
    int i = 0;
    while(1)
    {
        if(strcmp(pessoas[i].nome, p.nome) == 0 &&
           pessoas[i].idade == p.idade &&
           pessoas[i].genero == p.genero
           )
        {
          return 0;
        }
        if(i > num_pessoas)
        {
            pessoas[i-1] = p;
            return 1;
        }
        i++;
    }
    return 0;
}

int deletar(struct Pessoa p, struct Pessoa *pessoas, int num_pessoas)
{
    for(int i=0;i<num_pessoas;i++)
    {
        if(strcmp(pessoas[i].nome, p.nome) == 0 &&
           pessoas[i].idade == p.idade &&
           pessoas[i].genero == p.genero
            )
        {
            while(i < num_pessoas) {
                pessoas[i] = pessoas[i+1];
                i++;
            }
            return 1;
        }
    }
    return 0;
}

int main() {
    
    struct Pessoa pessoas[50];
    int num_pessoas = 0;
    
    while(1) {
        
        char escolha;
        scanf(" %c", &escolha);
        char nome[51]; char genero;
        int idade;
        
        if(escolha == 'p')
        {
            break;
        }
        if(escolha == 'i' || escolha == 'd')
        {
            scanf(" %[^\n] %d %c", nome, &idade, &genero);
            
            struct Pessoa p = criar(nome, idade, genero);
            
            if(escolha == 'i')
            {
                int ok = inserir(p, pessoas, num_pessoas);
                if(ok)
                {
                    num_pessoas++;
                }
            }
            
            if(escolha == 'd')
            {
                int ok = deletar(p, pessoas, num_pessoas);
                if(ok)
                {
                    num_pessoas--;
                }
            }
            
        }
        
    }
    
    for(int i=0;i<num_pessoas;i++)
    {
        struct Pessoa p = pessoas[i];
        printf("%s,%d,%c\n", p.nome, p.idade, p.genero);
    }

    return 0;
}