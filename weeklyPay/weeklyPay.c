#include <stdio.h>

void main(){
    float basePay = 12.0, overtimeRate = 1.5, tax300Rate = .15, tax150Rate = .20, taxGenRate = .25;
    float gross, net, tax300, tax150, taxGen;
    float hours;

    printf("How many hours this week?");
    scanf("%f", &hours);

    //get gross
    if(hours > 40){
        gross = 40 * basePay;
        //add overtime
        gross += (hours - 40) * basePay * overtimeRate;
    }
    else
    {
        gross = hours * basePay;
    }
    
    //calculate net according to taxrate
    if (gross > 450){
        tax300 = 300 * tax300Rate;
        tax150 = 150 * tax150Rate;
        taxGen = (gross - 450) * taxGenRate; 
        net = gross - tax300 - tax150 - taxGen; 
    }else if(gross > 300){
        tax300 = 300 * tax300Rate;
        tax150 = (gross - 300) * tax150Rate; 
        net = gross - tax300 - tax150;
    }else{
        tax300 = gross * tax300Rate;
        net = gross - tax300;
    }

    printf("Gross: %f.2\n Net: %f.2\n Total Taxed: %f.2", gross, net, tax300 + tax150 + taxGen);
}