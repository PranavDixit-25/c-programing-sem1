#include <stdio.h>

void displayStudent(char name[], int rollNumber, float marks) {
    printf("Student Details:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %f\n", marks);
}

int main() {
	printf("Devansh sain 590015109\n");
    char name[50];
    int rollNumber;
    float marks;

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter marks: ");
    scanf("%f", &marks);

    displayStudent(name, rollNumber, marks);

    return 0;
}

