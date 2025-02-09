#include <stdio.h>
int main(){
	int a;
	int b;
	printf("pranav dixit 590014418 \n");
	printf("enter 1st integer\n");
	scanf("%d",&a);
	printf("enter 2st integer\n");
	scanf("%d",&b);
	int aand= a & b;
	printf("bitwise & result: %d\n",aand);
	int oor= a | b;
	printf("bitwise or result: %d\n",oor);
	int xxor= a ^ b;
	printf("bitwise xor result: %d\n",xxor);
	return 0;
}
