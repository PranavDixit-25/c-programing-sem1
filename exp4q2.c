#include <stdio.h>

int main(){
	float a;
	float b;
	float c;
	printf("pranav dixit 590014418 \n");
	printf("enter marks in c \n");
	scanf("%f",&a);
	printf("enter marks in linux \n");
	scanf("%f",&b);
	printf("enter marks in math \n");
	scanf("%f",&c);
	printf("total marks:%f \n",a+b+c);
	float d=(a+b+c)/3;
	printf("avg marks:%f \n",(a+b+c)/3);
	if(a>=90){printf("grade a \n");
	}
	else if(a>=75 && a<=89){printf("grade b \n");
	}
	else if(a>=50 && a<=74){printf("grade c \n");
	}
	else {printf("fail \n");
	}
	
	
	

    
    
    
	return 0;
	
	
}
