# include <string.h>
# include <stdio.h>
# include <stdlib.h>

// use string constants.

// old programs will use a define statement:

# define NICKNAME "Ragweed"
# define HEIGHT 60
// this is run by the pre-processor. There is no scope.


int maint(){
// from C90, this is the way that you should write constants:
const int MONTHCOUNT = 12;

}