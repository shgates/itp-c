#include <stdio.h>

int checkArray(int a[], int n)
{
    int flag = 0;

    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) % 2 != 0)
        {
            flag = 1;
        }

        if (flag == 1)
        {
            break;
        }
    }

    return flag;
}

int main()
{

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int result = checkArray(array, n);

    if (result == 1)
    {
        printf("Chato");
    }
    else
    {
        printf("Legal");
    }
    return 0;
}