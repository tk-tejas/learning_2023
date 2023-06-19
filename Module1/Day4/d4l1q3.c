#include<stdio.h>
void reverseArray(int arr[],int size){
    int i=0,j=size-1;
    int temp;
    while (i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    printf("The original array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The array after reverse is: ");

    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
