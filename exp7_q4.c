#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;
    printf("pranav 590014418\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10; 
    }
    printf("Reversed number: %d\n", reversed_num);

    return 0;
}

