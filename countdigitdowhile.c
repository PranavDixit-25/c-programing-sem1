#include <stdio.h>

int main() {
int num, count = 0;
printf("Pranav Dixit 590014418\n");
printf("Enter a number: ");
scanf("%d", &num);
if (num == 0) {
    count = 1;
    } 
else {

        do {
            num /= 10;
            count++;
        } while (num != 0);
    }
    printf("number of digits: %d\n", count);
return 0;
}

