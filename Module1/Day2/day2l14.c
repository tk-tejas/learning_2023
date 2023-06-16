#include <stdio.h>

int countsetbits(int num){
    int cnt=0;
    while (num > 0){
        if (num & 1 == 1){
            cnt++;
        }
        num >>= 1;
    }
    return cnt;
}
int main(){
    int arr[] = {0x1,0xF4,0x10001};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for (int i = 0; i < size; i++){
        count+=countsetbits(arr[i]);
    }
    printf("Total number of bit set is: %d\n",count);
    return 0;
}
