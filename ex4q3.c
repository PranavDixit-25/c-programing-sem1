#include <stdio.h>

int main(){
	int a;
   printf("enter year \n");
   scanf("%d",&a);
    printf("pranav 590014418 \n");
   if((a % 4 == 0 && a % 100 != 0 ) || a % 400 == 0 ){printf("leap yr \n");
   }
   else{printf("not a leap yr \n");
   }
	
	return 0;
}
