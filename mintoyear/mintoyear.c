#include <stdio.h>

void main(){
    int min = 90;
    float years, days, hours, remainder, remainAsDec;

    printf("Supply Minutes\n");
    scanf("%d", &min);

    //int division gives us the base number of hours 
    hours = min / 60;
    //add the extra minutes as a decimal.
    remainder = min % 60;
    hours += remainder / 60;

    days = hours / 24;
    years = days / 365;

    //printf("%f hours \n %f remainder \n %f remainAsDec", hours, remainder, remainAsDec);

    printf("%f years and %f days", years, days);
}