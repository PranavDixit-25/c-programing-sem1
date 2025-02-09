#include <stdio.h>
int main() {
    int a,b;
    printf("pranav dixit 590014418\n");
	printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the ending number: ");
    scanf("%d", &b);
    while (a <= b) {
        printf("%d\n", a);
        a++;
    }

    return 0;
}

