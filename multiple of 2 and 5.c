#include <stdio.h>
int main(){

int a;
printf("enter number");
scanf("%d",&a);
if ( a % 2 == 0 || a % 5 == 0)
{printf("is a multiple of 2 and 5");
}
else { printf("is not a multiple of 2 and 5");
}
return 0;
}
