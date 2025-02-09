#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Compute factorial using a loop
    for(int i = 1; i <= num; ++i) {
        factorial *= i; // factorial = factorial * i;
    }

    // Output the result
    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}

