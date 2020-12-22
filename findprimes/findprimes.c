#include <stdio.h>
#include <stdlib.h>

void main(){
    int number, p;

    int primes[50] = {0};
    int primeIndex = 2;
    _Bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for(number=5; number<100; number = number + 2){
        isPrime = 1;
        for(p=1; isPrime == 1 && number / primes[p] >= primes[p]; ++p){
            // check if the number is a multiple of any existing prime numbers:
            if(number % primes[p] == 0){
                isPrime = 0;
            }
            if(isPrime == 1){
                primes[primeIndex] = number;
                ++primeIndex;
                printf("prime added: %d \n", primes[primeIndex]);
            }
        }
    }

    for (number = 0;  number < primeIndex;  ++number )
    {
        printf("%i  ", primes[number]);
    }   

}