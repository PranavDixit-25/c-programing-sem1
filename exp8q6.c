#include <stdio.h>

int main() {
	printf("pranav 590014418\n");
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') {
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}

