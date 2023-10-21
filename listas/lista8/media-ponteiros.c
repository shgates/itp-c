#include <stdio.h>

void calcular_media(int *A, int *B)
{
    int media = (*A+*B)/2;
    int resto = (*A+*B)%2;
    
    if(*A>*B)
    {
        *A = resto;
        *B = media;
        
    }
    else if(*B>*A)
    {
        *A = media;
        *B = resto;
    }
}

int main() {
    
    int A, B;
    scanf(" %d %d", &A, &B);
    
    calcular_media(&A, &B);
    
    printf("A = %d\nB = %d", A, B);
    
    return 0;
}