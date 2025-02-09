#include <stdio.h>
int main ()
{
	printf("pranav dixit 590014418 \n");
	int score;
	printf("ENTER YOUR SCORE \n");
	scanf("%d",& score);
	if (score >= 90 )
	{
		printf("GRADE A \n");
	}
	else if (score < 90 && score >= 80)
	{
		printf("GRADE B \n");
	}
	else if (score < 80 && score >= 70)
	{
		printf("GRADE C \n");
	}
	else if (score < 70 && score >= 60)
	{
		printf("GRADE D \n");
	}
	else 
	{
		printf("GRADE F \n");
	}
	return 0;
}
