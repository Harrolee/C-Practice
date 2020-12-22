#include <stdlib.h>
#include <stdio.h>

enum size {S,M,L};

struct sweater {
    enum size size;
    int stripeCount;
};

void main(){
    int i = 5;
    struct sweater christmas, *pchristmas;

    pchristmas = &christmas;

    pchristmas -> size = L;
    pchristmas -> stripeCount = 7;

    printf("christmas sweater size: %d", pchristmas -> size); 
}