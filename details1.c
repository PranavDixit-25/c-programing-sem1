#include<stdio.h>
int main(){
	char college_name[100];
	char address[100];
	
	printf("enter your college name:");
	fgets(collage_name,sizeof(college_name),stdin);
	
	printf("enter your address:");
	fgets(address,sizeof(address),stdin);
	
	printf("\n---information---\n");
	printf("college name: %s",college_name)
	
	

return 0;
}
