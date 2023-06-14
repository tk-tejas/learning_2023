#include <stdio.h>
int find_grade(int mrk){
    if (mrk >=90 && mrk <=100)
        printf("Grade A\n");
    else if (mrk>=75 && mrk<=89)
        printf("Grade B\n");
    else if (mrk>=60 && mrk<=74)
        printf("Grade C\n");
    else if (mrk>=50 && mrk<=59)
        printf("Grade D\n");
    else if (mrk>=0 && mrk<=49)
        printf("Grade F\n");
    else{
        printf("Marks is invalid\n");
    }
}
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    find_grade(marks);

    return 0;
}
