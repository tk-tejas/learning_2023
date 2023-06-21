#include<stdio.h>
int findlargest(int num){
    int max = 0;
    char numStr[5];
    sprintf(numStr,"%d",num);

    for (int i = 0; i<4;i++){

        char tempstr[5];
        int tempnum = 0;
        int index = 0;
        for (int j=0;j<4;j++){
            if (j!=i){
                tempstr[index++]=numStr[j];
            }
        }
        tempstr[index]='\0';
        sscanf(tempstr,"%d",&tempnum);
        if (tempnum>max){
            max=tempnum;
        }

    }
    return max;
}
int main(){
    int num;
    printf("Enter 4 digit number: ");
    scanf("%d",&num);
    int result=findlargest(num);
    printf("The largest 3 digit number after deleating a digit is: %d\n",result);

    return 0;
}
