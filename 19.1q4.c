#include <stdio.h>

double calculateMonthlySalary(double basicSalary) {
    double HRA = 0.20 * basicSalary;
    double DA = 0.10 * basicSalary;
    return basicSalary + HRA + DA;
}

int main() {
	printf("Devansh sain 590015109 \n");
    double basicSalary;
    printf("Enter the basic salary: ");
    scanf("%lf", &basicSalary);
    printf("The monthly salary is: %.2lf\n", calculateMonthlySalary(basicSalary));
    return 0;
}

