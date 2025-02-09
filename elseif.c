#include <stdio.h>
#include<math.h>

int main(){
    int x;
    printf("enter your marks");
    scanf("%d",&x);

    if (x>=80){printf("outstanding");}
    else if (x<80 && x>=30){printf("pass");}
    else if (x<30){printf("fail");}
    else if (x>100){printf("aukkat me rahh");}
    else   {printf("gand fad diii");}

    return 0;
}