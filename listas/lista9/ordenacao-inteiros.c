#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr;
    arr = malloc(sizeof(int) * 30);
    int num;
    int n = 0;
    while(1)
    {
        int sucess = scanf(" %d", &num);
        if(sucess <= 0)
        {
            break;
        }
        arr[n] = num;
        n++;
    }
    
   arr = realloc(arr, sizeof(int) * n);
    
    for(int i=0; i<n-1; i++)
    {
        int temp;
        for(int j=0; j< n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
             temp = arr[j+1];
             arr[j+1] = arr[j];
             arr[j] = temp;   
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(i < n-1)
        {
          printf("%d ",arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    
    return 0;
}