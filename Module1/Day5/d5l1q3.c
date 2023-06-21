#include<stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
typedef struct Time time;
time calculate_time_diff(time t1,time t2){
    struct Time timediff;
    int time1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int time2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;

    int second_diff = time1-time2;
    timediff.hours = second_diff/3600;
    second_diff %= 3600;
    timediff.minutes = second_diff/60;
    timediff.seconds = second_diff%60;

    return timediff;

}
int main(){
    struct Time Time1,Time2,TimeDiff;
    printf("Enter hours for start time: ");
    scanf("%d",&Time1.hours);

    printf("Enter minutes for start time: ");
    scanf("%d",&Time1.minutes);

    printf("Enter seconds for start time: ");
    scanf("%d",&Time1.seconds);

    printf("Enter hours for end time: ");
    scanf("%d",&Time2.hours);

    printf("Enter minutes for end time: ");
    scanf("%d",&Time2.minutes);

    printf("Enter seconds for end time: ");
    scanf("%d",&Time2.seconds);

    TimeDiff=calculate_time_diff(Time1,Time2);

    printf("The time difference is: %d:%d:%d",TimeDiff.hours,TimeDiff.minutes,TimeDiff.seconds);
}
