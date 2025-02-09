#include <stdio.h>
int main(){
	char a[50];
	char b[50];
	int c;
	int d;
	char e[50];
	int f;
	printf("enter brand name");
	scanf("%s",&a);
	printf("enter model number");
	scanf("%s",&b);
	printf("enter serial number");
	scanf("%d",&c);
	printf("enter  price");
	scanf("%d",&d);
	printf("enter colour");
	scanf("%s",&e);
	printf("enter battry capacity");
	scanf("%d",&f);
	
	printf("brand name : %s \n",a);
	printf("model number : %s \n",b);
	printf("serial number  : %d \n",c);
	printf("price : %d \n",d);
	printf("colour : %s \n",e);
	printf("battry capacity : %s \n",f);
	
	
	return 0;
	
	
}
