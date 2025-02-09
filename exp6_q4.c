#include<stdio.h>
int main()
{
	printf("pranav dixit 590014418 \n");
	int choice;
	int use;
	int bill;
	printf("enter 1 if your usage is upto 100 \n");
	printf("enter 2 if your usage is more then 100 and less then equal to 200 \n");
	printf("enter 3 if usage is more then 200 \n");
	scanf("%d",& choice);
	printf("enter the no of units consumed \n");
	scanf("%d",& use);
	switch (choice)
	{
		case 1: bill = use*5;
		        printf("THE ELECTRICITY BILL IS : %d", bill); break;
		case 2: bill = 500 + ((use)*6);
		        printf("THE ELECTRICITY BILL IS : %d", bill); break;
		case 3: bill = 500 + ((use)*7);
		        printf("THE ELECTRICITY BILL IS : %d", bill); break;
		default : bill = 500  + ((use)*8);
		          printf("THE ELECTRICITY BILL IS : %d", bill); 
	    
	}
	return 0;
}
