#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};
typedef struct Student student;
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar();
// allocating memory
    student *student = (struct Student *)malloc(n*sizeof(student));
    for(int i = 0; i < n; i++){
        printf("Enter the details for student %d:\n",i+1);
        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';
        printf("Roll No.: ");
        scanf("%d",&student[i].roll_no);
        getchar();
        printf("Marks: ");
        scanf("%f",&student[i].marks);
        getchar();
    }
    printf("\n");
    printf("Students Details:\n");
    for(int i = 0; i < n; i++){
        printf("\nStudent %d\n",i+1);
        printf("Nmae: %s\n",student[i].name);
        printf("Roll_No: %d\n",student[i].roll_no);
        printf("marks: %.2f\n",student[i].marks);
    }
    free(student);
}
