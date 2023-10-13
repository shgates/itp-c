#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3) {
    if(tipo == 'A') {
        float mediaAritmetica = (n1 + n2 + n3) / 3;
        return mediaAritmetica;
        
    } else if(tipo == 'P') {
        float mediaPonderada = ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;
        return mediaPonderada;
        
    } else {
        return 1;
    }
}

int main() {
    char tipo; float n1, n2, n3, media;
    
    scanf("%c %f %f %f", &tipo, &n1, &n2, &n3);
    
    media = calculaMedia(tipo, n1, n2, n3);
    
    printf("Média %.2lf", media);
    
    return 0;
}