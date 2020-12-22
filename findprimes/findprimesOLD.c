#include <stdio.h>

void main(){
    //array to store primes
    int primes[50] = {2};

    int min = 3, max = 100;
    int size, primeI, potentialPrime;
    _Bool isPrime = 1;

    for(potentialPrime = 2; potentialPrime <= 100; potentialPrime++){
        // loop through the prime array until you reach a 0. The 0 will be the end.
        for(primeI = 0; primeI <= 50 && isPrime == 1; primeI++){
            // when you reach the 0, stop dividing the potentialPrime by numbers in the prime array.
            if(primes[primeI] == 0 && primes[primeI] == 0){ break; }

            if (potentialPrime % primes[primeI] == 0){
                isPrime = 0;
            }
            printf("primeI:%d \n potentialPrime:%d \n primes[primeI]: %d \n isPrime:%d ", primeI, potentialPrime, primes[primeI], isPrime);
        }
        if(isPrime = 1){
            primes[potentialPrime-1] = potentialPrime;
            size++;
            printf("Prime Found: %d\n", potentialPrime);
        }
    }
    printf("%d Primes between 1-100", size);
    // loop i to 100
        // loop : cnd: check that element in array !=0 && binary is false
            // check if i % element == 0
            // if any of these in a loop returns true, set a binary to true
        // if binary is false, 
            // increment count var 
            // add i to array
            // print i
        
    // print count var
    // loop array" cnd element !=0
        // print values  
}