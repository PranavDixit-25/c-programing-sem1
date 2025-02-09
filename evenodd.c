#include<stdio.h>;
int main(){
	int a;
	printf("enter number \n");
	scanf("%d",&a);
	
	if(a>=0) {
		printf("positive\n");
		if( a % 2 == 0 ) {printf("even\n");
		else { printf("odd\n");
		}
		}
	}
	else {
		printf("negative\n");
		if( a % 2 == 0 ) {printf("even\n");
		else { printf("odd\n");
		}
		}
	}
	return 0;
	}
