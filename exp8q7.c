#include <stdio.h>

int main() {
	printf("pranav 590014418\n");
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}

