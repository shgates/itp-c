#include <stdio.h>

int main()
{

    int input;

    scanf("%d", &input);

    if (input == 0)
    {
        printf("Você entrou com 0, tente de novo na próxima");
    }
    else
    {

        int i, j, c, count;
        c = 1;

        for (i = 1; i <= input; i++)
        {
            for (j = 0; j < i; j++)
            {

                if (c < 10)
                {
                    printf(" %d ", c);
                }
                else
                {
                    printf("%d ", c);
                }

                c++;
            }
            printf("\n");
        }
    }

    return 0;
}