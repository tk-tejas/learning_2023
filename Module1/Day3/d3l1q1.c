#include<stdio.h>
void increasing_values(int n){
    for (int i = 1; i <= n; i++){
        printf("%d",i);
    }
}
void print_spaces(int n){
    for (int i = 1; i< 2*(n-1); i++){
        printf(" ");
    }
}
void decreasing_values(int n){
    for (int i = n; i>=1; i--){
        printf("%d",i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for (int j = n; j >= 1; j--){
        increasing_values(j);
        print_spaces(n-j+1);
        decreasing_values(j);
        printf("\n");
    }
    return 0;
}
