#include <stdio.h>
int main(){
	float a;
	float b;
    float c;
    float d;
    printf("pranav dixit 590014418\n");
    printf("Enter the initial price of the product:\n");
    scanf("%f",&a);
    printf("Enter the first discount percentage: \n");
    scanf("%f",&b);
    printf("Enter the second discount percentage:\n");
    scanf("%f",&c);
    printf("Enter the third discount percentage:\n");
    scanf("%f",&d);
    float finalprice =a-(a*(b/100))-(a*(c/100))-(a*(d/100));
    printf("final price:%f\n",finalprice);
	
	return 0;
}
