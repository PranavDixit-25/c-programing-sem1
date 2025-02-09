#include <stdio.h>
int main(){
	char a[50];
	char b[50];
	int c;
	int d;
	char e[50];
	int f;
	printf("enter book title ");
	scanf("%s",&a);
	printf("enter author name");
	scanf("%s",&b);
	printf("enter isbn");
	scanf("%d",&c);
	printf("enter price");
	scanf("%d",&d);
	printf("enter publisher");
	scanf("%s",&e);
	printf("enter yr of publication");
	scanf("%d",&f);
	
	printf("book title : %s \n",a);
	printf("author name : %s \n",b);
	printf("isbn : %d \n",c);
	printf("price : %d \n",d);
	printf("publisher : %s \n",e);
	printf("yr of publication : %d \n",f);
	
	
	return 0;
	
	
}
