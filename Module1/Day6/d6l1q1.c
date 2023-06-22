#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students) {
    const char* delimiter = " ";
    char* token;


    token = strtok(strdup(input), delimiter);

        // Extract rollno
    students->rollno = atoi(token);

        // Extract name
    token = strtok(NULL, delimiter);
    strncpy(students->name, token, sizeof(students->name));

        // Extract marks
    token = strtok(NULL, delimiter);
    students->marks = atof(token);

}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    getchar(); // Clear the newline character from the input buffer

    for (int i = 0; i < numStudents; i++) {
        char input[100];
        printf("Enter details for student %d: ", i + 1);
        fgets(input, sizeof(input), stdin);

        // Remove the trailing newline character from fgets
        input[strcspn(input, "\n")] = '\0';

        parseString(input, students);
    }

    // Printing the parsed values
    printf("\nParsed student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
