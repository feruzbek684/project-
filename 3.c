#include <stdio.h>
int kirit(int arr[], int size);
int main() {
    int n, i, j, vaqtincha, index = 0;
    printf("Arrayni kiritng: ");
    scanf("%d", &n);
    int arr[n], massiv[n];

    kirit(arr, n);

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[index]) {
            index = i;
        }
    }
    for (int i = 0; i < index; i++) {
        massiv[i] = arr[i];
    }
    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (massiv[j] > massiv[j + 1]) {
                vaqtincha = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = vaqtincha;
            }
        }
    }
    printf("Eng kichik sondan avvalgi elementlar:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", massiv[i]);
    }

    return 0;
}



int kirit(int arr[], int size){
    printf("Array elementlarini kiriting:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
