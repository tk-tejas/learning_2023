#include<stdio.h>
int find_min_max(int arr[],int size,int *min,int *max){
    *min = arr[0];
    *max = arr[0];
    for (int i = 1;i < size; i++){
        if (arr[i]<*min){
            *min=arr[i];
        }
        if (arr[i]>*max){
            *max=arr[i];
        }
    }
}
int main(){
    int size;
    printf("Enter size of the Array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter the the number: ");
        scanf("%d",&arr[i]);
    }
    printf("The Array is:");
    for (int i = 0; i < size; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");

    int min,max;
    find_min_max(arr,size,&min,&max);
    printf("the minimum value in the given array is: %d\n",min);
    printf("the maximum value in the given array is: %d\n",max);

    return 0;

}
