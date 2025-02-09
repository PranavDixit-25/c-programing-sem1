#include <stdio.h>
int main() {
int num, revnum = 0, rmdr;
printf("Pranav Dixit 590014418\n");
printf("Enter a number: ");
scanf("%d", &num);
do {
        rmdr = num % 10;
        revnum = revnum * 10 + rmdr;
        num /= 10;
    } while (num != 0);
printf("Reversed number: %d\n", revnum);
return 0;
}

