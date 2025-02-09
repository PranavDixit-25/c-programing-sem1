#include <stdio.h>

void inputEmployee(char name[], int *id, char department[], float *salary) {
    printf("Enter name: ");
    fgets(name, 50, stdin);
    printf("Enter ID: ");
    scanf("%d", id);
    printf("Enter department: ");
    scanf("%s", department);
    printf("Enter salary: ");
    scanf("%f", salary);
}

void displayEmployee(char name[], int id, char department[], float salary) {
    printf("\nEmployee Details:\n");
    printf("Name: %s", name);
    printf("ID: %d\n", id);
    printf("Department: %s\n", department);
    printf("Salary: %.2f\n", salary);
}

int main() {
	printf("Devansh sain 590015109\n");
    char name[50], department[50];
    int id;
    float salary;

    inputEmployee(name, &id, department, &salary);
    displayEmployee(name, id, department, salary);

    return 0;
}

