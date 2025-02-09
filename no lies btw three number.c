#include <stdio.h>
int main(){

int a;
int b;
int c;
printf("enter  1st number");
scanf("%d",&a);
printf("enter  2nd number");
scanf("%d",&b);
printf("enter  3rd number");
scanf("%d",&c);
if ( a>b>c)
{printf("b lies btw a and c");
}
 else if (b>c>a) { printf("c lies btw b and a");
}
else {printf("a lies btw b and c");
}
return 0;
}
