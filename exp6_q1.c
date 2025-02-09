#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("pranav dixit 590014418");
	printf("enter value of a\n");
	scanf("%d",&a);
	printf("enter value of b\n");
	scanf("%d",&b);
	printf("enter value of c\n");
	scanf("%d",&c);
	printf("enter value of d\n");
	scanf("%d",&d);
	printf("%d\n",a+b*c-d);//higher precedence is of mul and then plus minus
	return 0;	
}
