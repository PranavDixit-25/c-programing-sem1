#include <stdio.h>
int main(){

int a;
printf("enter number");
scanf("%d",&a);
if ( a % 2 == 0 && a % 3 == 0)
{printf("number even and divisible by 3");
}
else { printf("number is not even and nither divisible by 3");
}
return 0;
}
