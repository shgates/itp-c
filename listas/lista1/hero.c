#include <stdio.h>

int main() {
    int numHerois, classeHerois, nivelAmeaca;
    
    scanf("%d %d %d", &numHerois, &classeHerois, &nivelAmeaca);
 
     if (numHerois < 1 || classeHerois < 1 || classeHerois > 5 || nivelAmeaca < 1 || nivelAmeaca > 5) {
        printf("Entradas fora do intervalo esperado.");
        return 1;
    }
    
    if (nivelAmeaca == 1) {
      
        if (classeHerois >= 2 || numHerois >= 3 && classeHerois == nivelAmeaca) {
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar Saitama!");
        }
    } else if (nivelAmeaca == 2) {
  
        if (classeHerois >= 3 || numHerois >= 3 && classeHerois == nivelAmeaca) {
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar Saitama!");
        }
    } else if (nivelAmeaca == 3) {
  
        if (classeHerois >= 4 || numHerois >= 3 && classeHerois == nivelAmeaca) {
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar Saitama!");
        }
    } else if (nivelAmeaca == 4) {
    
        if (classeHerois == 5 || numHerois >= 3 && classeHerois == nivelAmeaca) {
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar Saitama!");
        }
    } else {
    
        printf("Melhor chamar Saitama!");
    }
    
    return 0;
}
