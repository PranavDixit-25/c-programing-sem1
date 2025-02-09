# include <stdio.h>
# include <math.h>
int main() {
   int x;
   printf("enter marks");
   scanf("%d",&x);

   if (x>=0 && x<30){printf("c");}
   else if  (x>=30 && x<70){printf("b");}
   else if  (x>=70 && x<90){printf("a");}
   else if  (x>=90 && x<=100){printf("b");}
   else {printf("wrong entry");}
   
    return 0;

}