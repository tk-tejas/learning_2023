#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    int even_sum=0,odd_sum=0;
    printf("The array is: ");
    for (int i=0;i<size;i++){
        if (arr[i]%2==0){
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
        printf("%d ",arr[i]);
    }
    printf("\n");
    int diff;
    diff=abs(even_sum-odd_sum);
    printf("The difference between even and odd elements is: %d",diff);
    return 0;

}
