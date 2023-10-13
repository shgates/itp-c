#include <stdio.h>

int main() {

    double tempoMaximo;
    int atletasAptos = 0;

    scanf("%lf", &tempoMaximo);

    double tempoAtleta;

    while(1) {

        scanf("%lf", &tempoAtleta);

        if(tempoAtleta == -1) {
            break;
        }

        if(tempoAtleta <= tempoMaximo) {
            atletasAptos++;
        }
    }

    int seriesNecessarias = (atletasAptos + 7)/8;

    printf("%d %d", atletasAptos, seriesNecessarias);

    return 0;
}