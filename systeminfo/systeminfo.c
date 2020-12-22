//plan: collect and return information about endpoint

#include <stdio.h>
//shows byte size for given computer
//expand to show the computer's information
void main(){

printf("int %zd \n", sizeof(int));
printf("float %zd \n ", sizeof(float));
printf("double %zd \n ", sizeof(double));
printf("double %zd \n ", sizeof(long double));
printf("char %zd \n ", sizeof(char));
printf("long %zd \n ", sizeof(long));
printf("long long %zd \n ", sizeof(long long));
printf("long long %zd \n ", sizeof(short));

}