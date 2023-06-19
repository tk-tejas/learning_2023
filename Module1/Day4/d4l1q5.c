#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    int even_index=0,odd_index=0;
    printf("The given array is: ");
    for(int i=0;i<size;i++){
        if(i%2==0){
            even_index+=arr[i];
        }
        else{
            odd_index+=arr[i];
        }
        printf("%d",arr[i]);
    }
    printf("\n");
    int diff=abs(even_index-odd_index);
    printf("The difference between even indexed and odd indexed elements is: %d",diff);

    return 0;

}
