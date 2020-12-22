//Demonstrate bitwise operators

#include <stdio.h>

void main(){
    short int c = 25, d = 30;
    short int and, or, flip, diff, right, left;

    and = c & d;            //expect 24
    or = c | d;             //expect 31
    flip = c ^ d;           //expect 7
    diff = ~c;              //expect 234
    right = c >> 2;         //expect 6
    left = c << 2;          //expect 100
    
    printf("and: %i \n or: %i \n flip: %i \n diff: %i \n right: %i \n left: %i \n", and, or, flip, diff, right, left); 
}