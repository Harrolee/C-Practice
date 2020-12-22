#include <stdio.h>
#include <stdlib.h>
// Goal: 
// find 1. total rainfall for each year 
// 2. avg yearly rainfall 
// 3. avg rainfall for each month

void main(){
    int dColumn, dRow, tColumn, tRow;
    float total, average;

    //create data:
    float data[5][12];
    char months[12][5] = {{"Jan"}, {"Feb"}, {"March"}, {"April"}, {"May"}, {"June"}, {"July"}, {"Aug"}, {"Sept"}, {"Oct"}, {"Nov"}, {"Dec"}};
    int years[5] = {2000, 2001, 2002, 2003, 2004};

    for(dRow = 0; dRow < 5; dRow++){
        //printf("Year %d: ", years[dRow]);
        for(dColumn = 0; dColumn < 12; dColumn++){
            data[dRow][dColumn] = rand() % 17 * 1.1 + 30;
            //printf("%f.2 ", data[dRow][dColumn]);
        }
        //printf("\n");
    }

    // test printing months:
    // for(dRow = 0; dRow <= 12; dRow++){
    //     for(dColumn = 0; dColumn <= 5; dColumn++){
    //         printf("%c", months[dRow][dColumn]);
    //     }
    //     printf("\n");
    // }

    //find total of each year
        // sum all values of each row
    // find average of each year
        // take total and divide by 12
    printf("Year\tTotal Rainfall\tAverage Rainfall\n");
    for(tRow = 0; tRow < 5; tRow++){
        total = 0;
        for(tColumn = 0; tColumn < 12; tColumn++){
            total = total + data[tRow][tColumn];
        }
        printf("%d\t%f\t%f\n", years[tRow], total, total/12);
    }
    printf("\n\n");
    printf("Average Rainfall:\tMonth\n");
    //find average of each month
        // take total for each row
        // divide total by 5
    for(tColumn = 0; tColumn < 12; tColumn++){
        total = 0;
        for(tRow = 0; tRow < 5; tRow++){
            total = total + data[tRow][tColumn];
        }
        //printf("%c Total Rainfall: %f\n", months[tRow], total);
        printf("%f\t\t%c\n", total/5, months[tColumn]);
    }
}