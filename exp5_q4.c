#include <stdio.h>
int main(){
	float a;
	
	printf("pranav dixit 590014418\n");
	printf("enter your balance \n");
	scanf("%d",&a);
	float c=a*(5/100);
	float d=a*(2/100);
	printf("intrest value :%f \n",c);
	printf("tax value :%f \n",d);
    printf("final value:%f \n",a-c+d);
    float b=a-c+d;
    if (b<5000){
    	printf("palanty of 100 will charge\n");
    	printf("final price:%f\n",b+100);
    
	}
	else {printf("no palanty");
	}
	
    
    
	
	
	
	
	return 0;
}
