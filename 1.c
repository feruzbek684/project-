#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int kirit_array (int a[], int size);

int toldir_array(int array[], int size);


int main () {
    int n;
    printf("n: ");
    scanf("%d", &n);
    int massiv[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &massiv[i]);
    }
    printf("\nqiymatlar ==> ");
    for (size_t i = 0; i < n; i++)
    {
        if (massiv[i] % 3 == 0 && massiv[i] % 7  == 0)
        {
            printf(" %d ", massiv[i]);
        }
        
    }
    int vaqtincha = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (massiv[j] > massiv[j + 1])
            {
                vaqtincha = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = vaqtincha;
            }
            
        }
        
    }

    printf("\nqiymatlar ==> ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", massiv[i]);
    }
    

    return 0;
    
}