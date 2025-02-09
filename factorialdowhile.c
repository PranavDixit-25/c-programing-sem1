#include <stdio.h>
int main() {
    int n, fact = 1, i = 1;
    printf("Pranav Dixit 590014418\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        fact *= i;
        i++;
    } while (i <= n);
    printf("Factorial is %d", fact);

    return 0;
}

