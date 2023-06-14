#include <stdio.h>
 int find_max_elif(int a, int b){
     if (a>b){
        return a;
     }else{
        return b;
     }
 }
 int find_max_ternary(int a,int b){
     int biggest=(a>b)? a:b;
     return biggest;
 }
 int main(){
     int n1,n2;
     printf("Enter The First Number: ");
     scanf("%d",&n1);
     printf("Enter The Second Number: ");
     scanf("%d",&n2);

     int maxi1 = find_max_elif(n1,n2);
     printf("Maximum Value by else-if method is: %d\n",maxi1);
     int maxi2 = find_max_ternary(n1,n2);
     printf("Maximum Value by ternary method is: %d\n",maxi2);
     return 0;

 }
