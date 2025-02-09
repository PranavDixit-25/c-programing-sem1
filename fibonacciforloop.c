#include <stdio.h>
int main()
{
	printf("pranav dixit 590014418 \n");
	int i , n , n2;
	int t = 0;
	int t2 = 1;
	printf("enter the number of terms \n");
	scanf("%d",&n);
	printf("\n %d %d ",t,t2);
	for (i=2;i<=n;++i)
	{
		n2 = t + t2;
		printf(" %d ",n2);
		t = t2;
		t2 = n2;
	}
	return 0;
}
