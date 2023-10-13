#include <stdio.h>
#include <string.h>

const char S[] =
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
     'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

void calcularCifra(const char *message, const char *key) {
    int msg_len = strlen(message);
    int key_len = strlen(key);

    for (int i = 0; i < msg_len; i++) {
        char c = message[i];
        if (c == '\n') {
            break; 
        }

      
        int char_idx = -1;
        for (int j = 0; j < sizeof(S); j++) {
            if (S[j] == c) {
                char_idx = j;
                break;
            }
        }

        if (char_idx == -1) {
            printf("Caractere invalido na entrada!");
            return;
        }

        char char_key = key[i % key_len];
        int change = char_key - '0'; 

        int chyper_idx = (char_idx + change) % sizeof(S);
        printf("%c", S[chyper_idx]);
    }
    printf("\n");
}

int main() {
    char key[5];
    char msg[201];

 
    scanf("%4s", key);
    scanf(" %[^\n]", msg);

   
    for (int i = 0; i < strlen(key); i++) {
        if (key[i] < '0' || key[i] > '9') {
            printf("Chave invalida!");
            return 0;
        }
    }


    calcularCifra(msg, key);

    return 0;
}
