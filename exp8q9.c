#include <stdio.h>

int main() {
	printf("pranav 590014418\n");
    char str[100], cleaned_str[100];
    int i, j = 0, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cleaned_str[j++] = str[i] + 32;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            cleaned_str[j++] = str[i];
        }
    }
    cleaned_str[j] = '\0';
    while (cleaned_str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        if (cleaned_str[i] != cleaned_str[len - i - 1]) {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}

