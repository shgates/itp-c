#include <stdio.h>
#include <string.h>

const char S[] =
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
     'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

void cifraVigenere(const char *mensagem, const char *chave) {
    int tamMensagem = strlen(mensagem);
    int tamChave = strlen(chave);

    for (int i = 0; i < tamMensagem; i++) {
        char caractere = mensagem[i];
        if (caractere == '\n') {
            break; // Sai do loop se encontrar uma quebra de linha.
        }

        // Verifica se o caractere está no vetor S.
        int indiceCaractere = -1;
        for (int j = 0; j < sizeof(S); j++) {
            if (S[j] == caractere) {
                indiceCaractere = j;
                break;
            }
        }

        if (indiceCaractere == -1) {
            printf("Caractere invalido na entrada!\n");
            return;
        }

        char caractereChave = chave[i % tamChave];
        int deslocamento = caractereChave - '0'; // Converte o caractere da chave para um número.

        // Realiza a cifragem.
        int indiceCifra = (indiceCaractere + deslocamento) % sizeof(S);
        printf("%c", S[indiceCifra]);
    }
    printf("\n");
}

int main() {
    char chave[5];
    char mensagem[201];

    // Lê a chave e a mensagem.
    scanf("%4s", chave);
    scanf(" %[^\n]", mensagem);

    // Verifica se a chave é válida.
    for (int i = 0; i < strlen(chave); i++) {
        if (chave[i] < '0' || chave[i] > '9') {
            printf("Chave invalida!\n");
            return 0;
        }
    }

    // Executa a cifragem.
    cifraVigenere(mensagem, chave);

    return 0;
}
