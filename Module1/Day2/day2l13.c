#include<stdio.h>

int findAlternateSum(int arr[],int size){
    int sum=0;
    for (int i=0; i< size; i++){
        if (i%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findAlternateSum(arr,size);
    printf("The sum of Alternate elements is: %d\n",ans);

    return 0;
}
