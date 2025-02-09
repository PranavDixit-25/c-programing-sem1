#include<stdio.h>
#include<math.h>

int main (){
    int x;
    printf("enter number ");
    scanf("%d",&x);

    if (x>0){printf("positive \n");
            if (x%2==0){printf("even \n");}
            else {printf("odd \n");}
            }
    else { printf("negative \n");
           if (x%2==0){printf("even \n");}
            else {printf("odd \n");}
            }

            return 0;

}