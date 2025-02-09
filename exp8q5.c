#include <stdio.h>

int main() {
	printf("pranav 590014418\n");
    int n, i, target, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Number found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Number not found in the array.\n");
    }
    return 0;
}

