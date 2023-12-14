#include<stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;

}Time;

Time addTime(Time time1, Time time2){
    Time result;

    result.second = time1.second + time2.second;
    result.minute = result.second /60;
    result.second %= 60;


    result.minute += time1.minute + time2.minute;
    result.hour = result.hour / 60;
    result.minute %= 60;

    result.hour += time1.hour + time2.hour;


    return result;

}

int main(){
    Time time1 , time2 , result;
    printf("\nEnter the First Time in hh:mm:ss format: ");
    scanf("%d %d %d", &time1.hour , &time1.minute, &time1.second);
    printf("\nEnter the Second Time in hh:mm:ss format: ");
    scanf("%d %d %d", &time2.hour , &time2.minute, &time2.second);

    result = addTime(time1, time2);

    printf("Added time:%d::%d::%d", result.hour , result.minute, result.second);

    return 0;


    
}