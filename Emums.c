//
// Created by marce on 3/22/2026.
//create an anum with the constants SUNDAY , MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY and assign this to the variables week 1 and week 2 and assign values to saturday and sunday

#include <stdio.h>
typedef enum  {
    SUNDAY =10,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY=12
}DAYS;
int main () {

    DAYS week_1 = (SATURDAY);
    DAYS week_2 =(SUNDAY);
        printf("%d\n",week_1);
    printf("%d",week_2);
        return 0;
}