# include <stdio.h>


// take a pointer, print the square of the value at that pointer:
void square(const int *base){
    printf("%d",(*base) * (*base));
}

int main(){
    int valToSquare;
    scanf("%d",&valToSquare);
    square(&valToSquare);
}