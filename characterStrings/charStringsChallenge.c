# include <stdlib.h>
# include <stdio.h>
# include <string.h>
#include <ctype.h>

void fourCommonStrFuncs(){
    // strcompare() compares first argument to left argument. If left argument is greater in size, -1 is returned. if equal, 0. if less than, 1.

    // strcat() concatenates the second string to the first.

    // strcpy() copies second argument into first argument
        // not super safe: strcpy does not check to see if there is enough space in the first var
    char tooShort[2] = "l";
    char word[] = "word"; 
    // this should throw a compiler error
    strcpy(tooShort,word);
    printf(tooShort);

    // instead of strcpy(), use strncopy(). The latter function has a third parameter that defines the size. Use the sizeOf operator to do this.
    strncpy(tooShort, word, sizeof(tooShort));
    printf(tooShort);

    strcat(tooShort, word);
    printf(tooShort);

    // strncat offers a third param to lock length. LLike strncpy.
    strncat(tooShort, word, 1);

    // strcmp() returns the location of the argument that is less than the other: -1 if left, 0 if equal, 1 if right
        // strcmp(A, B) : -1
        // strcmp(Z, a) : -1
        // strcmp("ya", "yas") : -1

    // strncmp() contains a third parameter. It lets you compare a finite number of strings. 
}




void searchString(){
    char *strInString = NULL;
    // strstr: 1 is the string, 2 is the string to search for.
        // returns a pointer to the char of the first occurance of the provided substring
    strInString = strstr("Really Yummy", "all");
    printf(strInString);

    char *charInString = NULL;
    // strchr: 1 is the string, 2 is the char to search for. strchr expects an int BUT the compiler will autoconvert a char to an int. 
        // Returns the address in memory where the first instance of the second argument is found.
    charInString = strchr("Rather", 't');
    printf("%c", *charInString); // returns t.
    // we would use strchar to find and replace given characters
}

void tokenize(){
    // break into smaller peices
    // strtok: 1 string to tokenize, 2 the possible delimiters
        // returns a pointer to the memory between the start of the string and the first occurance of a provided delimiter
    char untokened[] = "gre-ens, beans, peas, tomatoes, potatoes";
    const char delimiter[] = ",- ";

    char *ptoken = NULL;
    ptoken =  strtok(untokened, delimiter); // returns a pointer to "gre"

    char *tokenArray[7];

    int i = 0;
    while(ptoken!=NULL){
        tokenArray[i] = ptoken;
        printf("%s \n", ptoken);
        ptoken = strtok(NULL, delimiter);   // Q: why does passing NULL make this look for the next substring in the string?   
        i++;                                // A: when we pass NULL, strtok() automagically picks up where it left off in the string we were working with.
    }                                           // this happens because strtok() replaces the token that it found, all the way up to the first delimiter, with a NULL character.
    tokenArray[7] = NULL;
    printf("\n\n");
    for(int j = 0; tokenArray[j]!=NULL;j++){
        printf("%s\n",tokenArray[j]);
    }

}

void analyze(){
    //
    // "red".isLower();
    // "Red".isUpper();
    // "".isAlpha();
}

void convert(){

    // convert a single char
    char upperT = (char)toupper('t');
    // convert a string
    char inString[12];
    scanf("%s",inString);;
    for(int i=0;(inString[i] = (char)toupper(inString[i]))!='\0';i++);
    // ^^ shorthand for below:
        // for(int i=0;inString[i]!='\0';i++){
        //     inString[i] = (char)toupper(inString[i]);
        // }
    printf(inString);


    // convert char to other types:
    // ascii to int:
    //atoi('h');
    // ascii to float:
    //atof('h');
    // ascii to long:
    //atol('h');

    // convert other types to char:
    // int to ascii
    //char *pInt;
    //itoa(44,pInt);
    // etc

    // convert string to double, float, or int:
    //char *pdouble;
    //strtod("2.7237",pdouble);
    // strtof
    // strtoi
    // etc

}


int stArrLen(char *str){
    int count = 0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}

void conCat(char *result, char *arr1, char *arr2){
    int r_index = 0;
    int arr2_i = 0;
    while(arr1[r_index] != '\0'){
        result[r_index] = arr1[r_index];
        r_index++;
    }
    while(arr2[arr2_i] != '\0'){
        result[r_index] = arr2[arr2_i];
        arr2_i++;
        r_index++;
    }
}


_Bool areStrEqual(const char *str1, const char *str2){
    _Bool equal = 0;
    if(stArrLen(str1) == stArrLen(str2)){
        // run each array to their end, checking each char at each step. if they reach a null terminator at the same time, then they are equal
        int i = 0;
        while (str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i]){
            i++;
        }
        if(str1[i] == '\0' && str2[i] == '\0'){
            equal = 1;
        }
    }
    return equal;
}

// below is the way I would do it if it were easy to access the length of the string.
// _Bool areStrEqual(char *str1, char * str2){
//     // check length:
//     if(stArrLen(str1) == stArrLen(str2)){
//         for(int i=0;i<=stArrLen(str1);i++){
//             if(str1[i]!=str2[i]){
//                 return 0;
//             }
//         }
//         return 1;
//     }
//     return 0;
// }

void charArrChallenge(){
    // count the length of array
    printf("%d\n", stArrLen("Record"));


    // concatenate two strings
    char resultArr[20];
    conCat(resultArr, "oregano", "illy");
    printf(resultArr);

    printf("\n%d\n", areStrEqual("ape","ape"));
}




int main() {
    charArrChallenge();
    //searchString();
    //tokenize();
    //convert();

}