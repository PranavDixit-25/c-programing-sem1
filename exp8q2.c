#include <stdio.h>
int mergeAndSort(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i, j;
    printf("pranav 590014418\n");
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        result[n1 + j] = arr2[j];
    }
    for (i = 0; i < n1 + n2; i++) {
        for (j = i + 1; j < n1 + n2; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    return 0;
}

int main() {
    int n1, n2, i;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int result[n1 + n2];
    mergeAndSort(arr1, n1, arr2, n2, result);
    printf("Sorted merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}

