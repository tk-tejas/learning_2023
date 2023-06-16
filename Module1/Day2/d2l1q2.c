#include<stdio.h>
void swapping(void* a1,void* a2,size_t size){
    char* ptr1 = (char*)a1;
    char* ptr2 = (char*)a2;
    char temp;
    for (size_t i=0;i<size;i++){
        temp=*(ptr1+i);
        *(ptr1+i)=*(ptr2+i);
        *(ptr2+i)=temp;
    }
}
int main(){
    int x=50,y=60;
    printf("Before swapping a1=%d and a2=%d\n",x,y);
    swapping(&x,&y,sizeof(int));
    printf("after swapping a1=%d and a2=%d\n",x,y);

    float f1=50.00,f2=60.00;
    printf("Before swapping f1=%f and f2=%f\n",f1,f2);
    swapping(&f1,&f2,sizeof(float));
    printf("after swapping f1=%f and f2=%f\n",f1,f2);

    return 0;


}
