#include <stdio.h>

int main() {
    
    int times;
    char letter;
    
    scanf("%d %c", &times, &letter);
    
    for(int i = 0; i < times-1; i++) {
        
        printf("%c", letter);
        
        for (int j = 0; j < times-i-3; i++)
        {
            printf(" ");
            
        }
        


        printf("%c\n",letter);
    }
    
    return 0;
}