#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};

void search_operation_name(const struct Student* student, int nstudents, const char* targetName) {
    int found = 0;

    for (int i = 0; i < nstudents; i++) {
        if (strcmp(student[i].name, targetName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", student[i].rollno);
            printf("Name: %s\n", student[i].name);
            printf("Marks: %.2f\n", student[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", targetName);
    }
}

int main() {
    int nstudents;
    printf("Enter the number of students: ");
    scanf("%d", &nstudents);

    struct Student* student = malloc(nstudents * sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < nstudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &student[i].rollno);
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }

    char targetName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", targetName);

    search_operation_name(student, nstudents, targetName);

    return 0;
}

