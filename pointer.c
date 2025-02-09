#include <stdio.h>
void example(){
	int var = 10;
	int *ptr;
	ptr = &var;
	printf("add in ptr: %p\n",ptr);
	printf("value of var: %d\n",var);
	printf("value of ptr: %d\n",*ptr);
	
}
int main() {
	example();
	return 0;
}
