#include <stdio.h>
int main(){
	int a;
	int b;
	printf("pranav dixit 590014418 \n");
	printf("enter your age\n");
	scanf("%d",&a);
	printf("enter your income per month\n");
	scanf("%d",&b);
	if ((a>=25 && a<=60) && b>50000){
		printf("eligible for lone\n");
	}
	else { 
	printf("not eligible for lone\n");
	}
	
	
	return 0;
}
