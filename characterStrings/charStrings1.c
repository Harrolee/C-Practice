# include <stdlib.h>
# include <stdio.h>
# include <string.h>

// a char array variable is a user abstraction.
// the var contains a pointer to a contiguous memory block. The size of the memory block is defined when we define the size of the array, ex: char ex[5];

// "x" is char x[3] = {'x','/0'};
// 'x' is char x

int main(){
    char string[5];
    // NB: we use the & to direct user input to an address space.
        // We do not use the & here because a character array is a pointer.
        // the second argument of scanf expects an address. Pointers contain addresses. Passing a char array variable as the second argument of scanf puts an address in the function
    scanf("%s", string);
    printf(string);

    // the null terminator:
    printf("\nnull terminator: %d\n",string[5]);

    char waka[] = "waka";

    // string equivalence?
        // either compare each element in char array or use strcmp()
    printf("compare result: %d\n",strcmp(string,waka)); // 0 when equal. -1 when string is "love" and waka is "waka". 1 when string is "z" and waka is "waka"

    // find the length of a string?
    int count = 0;
    while(string[count] != '\0'){
        count++;
    }
    printf("input string size: %d\n",count);

    // simpler way: strlen()
    printf("waka size: %d", strlen(waka));


    // note that both methods do not count the null terminator.
}

