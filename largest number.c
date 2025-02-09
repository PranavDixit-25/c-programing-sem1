#include<stdio.h>
int main(){

int a,b,c;
printf("enter integer 1 \n");
scanf("%d",&a);
printf("enter integer 2\n");
scanf("%d",&b);
printf("enter integer 3\n");
scanf("%d",&c);
if (a>b && a>c) {
	printf("%d is the largest number\n",a);
}
else if (b>a && b>c) {
	printf("%d is the largest number\n",b);
}
else {
	printf("%d is largest number\n",c);
}
return 0;
}
