# include <stdlib.h>
# include <stdio.h>
# include <string.h>

// void reverseString(char *string);
// void bubbleSort(char *string);


// display string in reverse order
    // read string from keyboard
    // use strlen

void reverseString(char *string){
    int len = strlen(string);
    int r_index = 0;
    char reverseString[20];
    while(len>0){
        reverseString[r_index] = string[len];
        printf("val at len %d: %c \t reverseString: %c \n", len, string[len], reverseString[r_index]);
        len--;
        r_index++;
    }
    printf("%s", reverseString);
    // why is it that this sometimes prints but sometimes does not?
}



// sort string by bubble sort
    // read string from keyboard
    // use strcmp and strcpy

void bubbleSort(){
    char strings[10][10];
    // given strings from the user, sort strings with bubble sort.

    // get strings:
    int wordCount;
    printf("How many words?\n");
    scanf("%d", &wordCount);

    for(int i=0;i<wordCount;i++){
        printf("word %d\n",i);
        scanf("%s",strings[i]);
    }

    // bubble sort strings:
    for(int i=1,j;i<wordCount;i++){
        j = i;
        char tempString[10];
        while(j > 0 && strcmp(strings[j],strings[j-1])==-1){
            strcpy(tempString,strings[j]);
            strcpy(strings[j],strings[j-1]);
            strcpy(strings[j-1],tempString);
            j--;
        }
    }

    // insertion sort strings
    for(int i = 1,j;i<wordCount;i++){
        char currString[10];
        strcpy(currString,strings[i]);
        j = i;
        while(j > 0 && strcmp(currString,strings[j-1])==-1){
            strcpy(strings[j],strings[j-1]);
            j--;
        }
        strcpy(strings[j],currString);
    }

    // print ordered
    printf("\nIn order:\n");
    for(int i=0; i<wordCount;i++){
        printf("\n%s",strings[i]);
    }

}
// questions:
    /*
    
    */

int main(){
    // char string[10];
    // scanf("%s",string);

    //reverseString(string);
    
    bubbleSort();


    return 0;
}