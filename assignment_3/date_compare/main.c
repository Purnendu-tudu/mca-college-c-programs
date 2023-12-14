#include<stdio.h>

typedef struct{
    int day;
    int month;
    int year;
} Date;

int compareDate(Date date1, Date date2){
    // Compare years
    if (date1.year < date2.year) {
        return -1;
    } else if (date1.year > date2.year) {
        return 1;
    }

    // Years are equal, compare months
    if (date1.month < date2.month) {
        return -1;
    } else if (date1.month > date2.month) {
        return 1;
    }

    // Months are equal, compare days
    if (date1.day < date2.day) {
        return -1;
    } else if (date1.day > date2.day) {
        return 1;
    }

    // Dates are equal
    return 0;
}

int main(){
    Date date1, date2;
    printf("\nEnter the First Date: dd::mm::yyyy format: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("\nEnter the Second Date: dd::mm::yyyy format: ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int flag = compareDate(date1, date2);
    if(flag == 0){
        printf("\nDates are Equal");
    }else{
        printf("\nDates are  Not Equal");
    }

    return 0;
}