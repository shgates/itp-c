#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "PrefixoTexto"; // Sua string
    char prefixo[] = "Prefixo"; // Prefixo a ser removido

    // Verifica se 'str' tem o prefixo 'prefixo' com strncmp
    if (strncmp(str, prefixo, strlen(prefixo)) == 0) {
        // Remove o prefixo movendo os caracteres restantes para o início da string
        memmove(str, str + strlen(prefixo), strlen(str) - strlen(prefixo) + 1);
    }

    printf("String após a remoção do prefixo: %s\n", str);

    return 0;
}
