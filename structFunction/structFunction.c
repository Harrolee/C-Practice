#include <stdlib.h>
#include <stdio.h>
// create struct of emplyee type with 3 members
// declare and initialize an instance of an employee type
// read in a second employee from the console. Store in employee struct
// print contents for both

struct employee {
    char name[10];
    int hireDate;
    float salary;
};

void main(){
    // first employee
    struct employee Dan = {
        {"Dan Wilson"},
        {2019},
        {65000.33f}
    };
    // read in second emplyee from input
    struct employee newHire;
    printf("Who else works here?");
    scanf("%s", &newHire.name);
    printf("When did they start?");
    scanf("%d", &newHire.hireDate);
    printf("How much do they make?");
    scanf("%f", &newHire.salary);

    // print contents for both
    printf("First Employee:\n Name: %s\n Hired in: %d \n Salary: %f\n\n\nSecond Employee:\nName: %s\n Hired in: %d \n Salary: %f", Dan.name, Dan.hireDate, Dan.salary, newHire.name, newHire.hireDate, newHire.salary);
}