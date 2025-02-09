#include <stdio.h>
int main(){
	char a[50];
	int b;
	int c;
	int d;
	char e[50];
	char f[50];
	printf("enter product name");
	scanf("%s",&a);
	printf("enter product id");
	scanf("%d",&b);
	printf("enter product quantity");
	scanf("%d",&c);
	printf("enter product price");
	scanf("%d",&d);
	printf("enter product manufracture");
	scanf("%s",&e);
	printf("enter product category");
	scanf("%s",&f);
	
	printf("product name : %s",a);
	printf("product id : %d",b);
	printf("quantity : %d",c);
	printf("price : %d",d);
	printf("manufacture : %s",e);
	printf("category : %s",f);
	
	
	return 0;
	
	
}
