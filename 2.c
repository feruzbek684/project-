#include <stdio.h>

int kochir (int arr[], int n){
    int vatincha = 0;  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 0)
            {
                vatincha= arr[j];
                arr[j + 1] = arr[j];
                arr[j] = vatincha; 
            }
            
        }
        
    }
    
}
int main() {
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
        printf("%d", massiv[i]);
        
    }
    printf("\n\n 0 larni oxiriga tushirish: \n");
    kochir(massiv, n);
    printf("\nqiymatlar ==> ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d", massiv[i]);
        
    }
    return 0;
}
