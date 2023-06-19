#include<Stdio.h>
int main(){
    int n;
    int sum = 0;
    float avg;

    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter 1st number:\n");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        sum += arr[i];

    }
    avg=(float)sum/n;
    printf("The Sum of the array is: %d\n",sum);
    printf("The Average of the array is: %.2f\n",avg);

    return 0;
}
