#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

struct Student {
    int id;
    char name[50];
    char department[50];
    float mark;
};

struct Student students[MAX_STUDENTS];
int count = 0;

void addStudent() {
    if (count >= MAX_STUDENTS) {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", students[count].name);

    printf("Enter Department: ");
    scanf(" %49[^\n]", students[count].department);

    printf("Enter Mark: ");
    scanf("%f", &students[count].mark);

    count++;
    printf("\nStudent added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("\nNo students available.\n");
        return;
    }

    printf("\n========== STUDENT LIST ==========\n");

    for (int i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("ID         : %d\n", students[i].id);
        printf("Name       : %s\n", students[i].name);
        printf("Department : %s\n", students[i].department);
        printf("Mark       : %.2f\n", students[i].mark);
    }
}

void searchStudent() {
    int id, found = 0;

    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Found!\n");
            printf("ID         : %d\n", students[i].id);
            printf("Name       : %s\n", students[i].name);
            printf("Department : %s\n", students[i].department);
            printf("Mark       : %.2f\n", students[i].mark);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found!\n");
    }
}

int main() {
    int choice;

    printf("========================================\n");
    printf("       STUDENT MANAGEMENT SYSTEM        \n");
    printf("       Docker + AWS EC2 Demo            \n");
    printf("========================================\n");

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
