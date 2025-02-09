#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("pranav dixit 590014418\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        count = 1;
    } else {
      
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}

