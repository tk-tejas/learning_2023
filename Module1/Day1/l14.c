#include <stdio.h>

int main(){
    float operand1,operand2,ans;
    char operator;
    printf("Enter operand 1: ");
    scanf("%f",&operand1);

    printf("Enter operator: ");
    scanf(" %c",&operator);

    printf("Enter operand 2: ");
    scanf("%f",&operand2);
    switch(operator){
        case '+':
            ans=operand1+operand2;
            printf("answer is: %.3f\n",ans);
            break;
        case '-':
            ans=operand1-operand2;
            printf("answer is: %.3f\n",ans);
            break;
        case '/':
            if (operand2!=0){
                ans=operand1/operand2;
                printf("answer is: %.3f\n",ans);
                break;
            }else{
                printf("Operand 2 should not be 0");
            }
        case '*':
            ans=operand1*operand2;
            printf("answer is: %.3f\n",ans);
            break;
        default:
            printf("Invalid operator is entered");
            break;


    }
    return 0;


}
