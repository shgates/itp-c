#include <stdio.h>
#include <string.h>

struct Smartphone {
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
};

int cadastraSmartphone(int qnt_cadastrada, struct Smartphone *phones) {
    
    struct Smartphone p;
    char modelo[40];
    int memoria;
    float processador, camera, bateria;
    scanf(" %[^\n]s", modelo);
    scanf(" %d %f %f %f", 
    &memoria, &processador, &camera, &bateria);
    
    strcpy(p.modelo, modelo);
    p.memoria = memoria;
    p.processador = processador;
    p.camera = camera;
    p.bateria = bateria;
    
    phones[qnt_cadastrada] = p;
    
    qnt_cadastrada++;
    return qnt_cadastrada;
}

int pesquisaSmartphones(int qnt_cadastrada, struct Smartphone phones[], struct Smartphone reqMin) {
    
    int smartphones_encontrados = 0;
    for(int i=0;i<qnt_cadastrada;i++)
    {
        struct Smartphone p = phones[i];
        if(reqMin.memoria <= p.memoria &&
           reqMin.processador <= p.processador &&
           reqMin.camera <= p.camera &&
           reqMin.bateria <= p.bateria)
        {
            smartphones_encontrados++;
            printf("Modelo: %s\n", p.modelo);
            printf("Memoria: %dGB\n", p.memoria);
            printf("Processador: %.2lfGhz\n", p.processador);
            printf("Camera: %.2lfMPixels\n", p.camera);
            printf("Bateria: %.2lfmA\n\n", p.bateria);
        }
    }
    return smartphones_encontrados;
}


int main() {

   struct Smartphone phones[50];
   int qnt_cadastrada = 0;
   while(1)
   {
       char escolha;
       
       scanf(" %c", &escolha);
       

       if(escolha == 'n')
       {
           break;
       }
       else if(escolha == 's')
       {
           
          qnt_cadastrada = cadastraSmartphone(qnt_cadastrada, phones);
          
       }
       
        else {
            return 0;
        }
   }
    
    struct Smartphone reqMin;
    
    scanf(" %d %f %f %f",
    &reqMin.memoria,
    &reqMin.processador,
    &reqMin.camera,
    &reqMin.bateria);
    

    int smartphones_encontrados = pesquisaSmartphones(qnt_cadastrada, phones, reqMin);
   
    printf("%d smartphones encontrados.", smartphones_encontrados);
   
    return 0;
}


