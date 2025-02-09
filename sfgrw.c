#include <stdio.h>
int main()
{
	printf("TANYA CHOUDHARY 590013811 \n");
	int n ;
	printf("Enter the number \n");
	scanf("%d",&n);
	int i=0;
	while(n!=0)
	{
		n = n/10;	
		i++;
	}
	printf("The number of digits are: %d \n",i);
	return 0;
}
