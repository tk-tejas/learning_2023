#include <stdio.h>
struct student {
    int Roll_No;
    char Name[20];
    int mrk_phy;
    int mrk_math;
    int mrk_chem;
};

 void summary(struct student s1){
     int total_mrks = s1.mrk_phy + s1.mrk_math + s1.mrk_chem;
     float percentage = (float)total_mrks/300*100;
     printf("Roll No: %d\n",s1.Roll_No);
     printf("Name: %s\n",s1.Name);
     printf("Physics marks: %d\n",s1.mrk_phy);
     printf("Math marks: %d\n",s1.mrk_math);
     printf("Chemistry marks: %d\n",s1.mrk_chem);
     printf("Total marks: %d\n",total_mrks);
     printf("Percentage: %.2f%%\n", percentage);
 }
 int main(){
     struct student s1;
     printf("Enter Roll No: ");
     scanf("%d",&s1.Roll_No);
     printf("Enter Name: ");
     scanf(" %[^\n]s",s1.Name);
     printf("Enter Physics marks: ");
     scanf("%d",&s1.mrk_phy);
     printf("Enter Maths Marks: ");
     scanf("%d",&s1.mrk_math);
     printf("Enter Chemistry Marks: ");
     scanf("%d",&s1.mrk_chem);
     summary(s1);

     return 0;
 }

