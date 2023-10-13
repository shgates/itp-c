#include <stdio.h>

int main() {
    int ano, mes, dia, validadeEmDias;
    
    scanf("%d", &validadeEmDias);
    
    ano = validadeEmDias / 365;
    mes = (validadeEmDias - (ano * 365)) / 30;
    dia = validadeEmDias - (ano * 365) - (mes * 30);
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano, mes, dia);
 
    return 0;
}