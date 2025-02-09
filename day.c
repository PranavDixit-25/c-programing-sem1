#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("enter day");
    scanf("%d",&x);

    switch (x) {
        case 1 : printf("mon");
                break;
        case 2 : printf("tues");
                break;
        case 3 : printf("wed");
                break;
        case 4 : printf("thus");
                break;
        case 5 : printf("fri");
                break;
        case 6 : printf("sat");
                break;
        case 7 : printf("sun");
                break; 
        default : printf("not a valid day");                                       

    }
    return 0;
}