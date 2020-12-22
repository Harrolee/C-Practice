/* Challenge: Write 3 functions.
    1: Find greatest common divisor of two non-negative integers and return the result.
        -take two ints
    2: calculate absolute value of a number
        -Take float, return a float (why? if someone passed an int, it would work.)
    3: compute square root of a number
        -if arg passed in is negative, display a message to the user and then return -1.0
            -use the absolute value function to display the message above
*/
#include <stdio.h>

int gcd(int first, int second);
float AbsoluteVal(float val);

// Below --> once I learn pointers, I can write this as a function to simplify the below code.
// compare the size of two floats and return an array with them in order
// float* compareSize(float first, float second){
//     float orderedNumbers[2];
//     // order the numbers by size.
//     // there are only two cases because if the numbers are equal, the order doesn't matter.
//     if(first < second){
//         orderedNumbers[0] = first;
//         orderedNumbers[1] = second;
//     }
//     else{
//         orderedNumbers[0] = second;
//         orderedNumbers[1] = first;
//     }
//     return orderedNumbers;
// }

int gcd(int first, int second){
    if (first != AbsoluteVal(first) || second != AbsoluteVal(second)){
        printf("Please submit non-negative numbers");
        return 1;
    }

    int gcd = 0;
    int smaller, larger;

    /*gcd algorithm:
        first: 
            determine which is smaller.

            check if larger % smaller is 0.
                if so, smaller is gcd
            check if smaller is 1.
                if so, smaller is gcd
            
            subtract smaller from larger.

        repeat
    */
    while (gcd == 0){
// best case:
    // if they are equal, they are the gcd
        if(first == second){
            gcd = first;
            printf("%d",first);
            return gcd;
        }
    // if they are not equal, learn which is larger   
        if(first < second){
            smaller = first;
            larger = second;
        }
        else{
            smaller = second;
            larger = first;
        }
// best cases:
        // check if larger % smaller is 0.
        //    if so, smaller is gcd
        if(larger % smaller == 0){
            return smaller;
             
        }
        //check if smaller is 1. if so smaller is gcd
        if(smaller == 1){
            return smaller;
        } 
        
        // subtract smaller from the larger
        first = larger - smaller;
        second = smaller;
    }
    return gcd;
}


float AbsoluteVal(float val){
    float absVal;
    if (val > 0){
        absVal = val;
    } else {
        absVal = val * -1;
    }
    return absVal;
}

int squareRoot(int val){
    // if (val != AbsoluteVal(val)){
    //     printf("Negative numbers do not have square roots.\n");
    //     return 1.0;
    // }
    int root = 1; 
    while (root * root != val){
        root += 1;
    }
    return root;
}

float main(){

    ///Test Conditions:

    // squareRoot();
    printf("should be 3: %d\n",squareRoot(9));
    printf("should be a number: %d\n",squareRoot(5));  
    // absVal
    printf("should be 3: %f\n",AbsoluteVal(-3));
    printf("should be 3: %f\n",AbsoluteVal(3));
    // gcd
    printf("should print 1 and a message: %d\n",gcd(-10,10));
    printf("should print 10: %d\n",gcd(10,10));
    printf("should print 1: %d\n",gcd(17,69));  // -17738899
    printf("should print 1: %d\n",gcd(69,17));  // 101627
    printf("should print 17: %d\n",gcd(17,17));
    printf("should print 25: %d\n",gcd(50,25));
    printf("should print 25: %d\n",gcd(25,50));
    printf("should print 3: %d\n",gcd(90,3));   // -429109235
    printf("should print 3: %d\n",gcd(3,90));
    