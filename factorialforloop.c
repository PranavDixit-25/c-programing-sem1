#include <stdio.h>

int main() {
    int n;
    int factorial = 1;
    int i; 

    printf("pranav 590014418 \n");
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    
    printf("Factorial  is %d\n",factorial);

    return 0;
}

