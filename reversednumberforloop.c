#include <stdio.h>

int main() {
    int num, revnum = 0, remainder;

    printf("pranav dixit 590014418 \n");   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    int original_num = num;

   
    int tempnum;

    
    for (tempnum = num; tempnum != 0; tempnum /= 10) {
        remainder = tempnum % 10;
        revnum = revnum * 10 + remainder;
    }

    
    printf("Reversed is %d\n",  revnum);

    return 0;
}

