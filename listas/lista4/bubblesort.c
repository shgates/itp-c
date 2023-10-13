#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

        printArray(array, n);
    }
}

int main()
{

    int arrayLen;
    scanf("%d", &arrayLen);

    int array[arrayLen];
    for (int i = 0; i < arrayLen; i++)
    {
        scanf("%d", &array[i]);
    }

    printArray(array, arrayLen);
    bubbleSort(array, arrayLen);

    return 0;
}