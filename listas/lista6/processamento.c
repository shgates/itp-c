#include <stdio.h>
#include <string.h>

int main() {

    int numPrefixos;

    scanf("%d", &numPrefixos);

    char prefixos[100][101];
    
    for (int i = 0; i < numPrefixos; i++)
    {
        scanf("%s", prefixos[i]);
    }
    
    int numSufixos;

    scanf("%d", &numSufixos);
    
    char sufixos[100][101];

    for (int i = 0; i < numSufixos; i++)
    {
        scanf("%s", sufixos[i]);
    }
    
    int numPalavras = 0;
    char palavras[100][101];
    
    while(1) {
        if(scanf("%s", palavras[numPalavras]) == '-1') 
        {
            break;
        }
        numPalavras++;
    }
    
    for (int i = 0; i < numPalavras; i++)
    {
        scanf("%s", palavras[i]);
    }
    


    return 0;
}