#include <stdio.h>
#include <math.h>

int main() {
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){printf("lowwer case");}
    else if(ch>='A' && ch<='Z'){printf("upper case");}
    else {printf("not a character");}

    return 0;
}