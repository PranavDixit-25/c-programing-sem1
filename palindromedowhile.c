#include <stdio.h>

int main() {
int num, reversed_num = 0, remainder, original_num;
printf("Pranav Dixit 590014418\n");
printf("Enter a number: ");
scanf("%d", &num);
original_num = num;

    do {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10; 
    } while (num != 0);

    
    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}

