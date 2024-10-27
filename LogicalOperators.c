//To understand Logical Operators in C

#include <stdio.h>

int main() {
    int a=100, b=80;
    
    printf ("a>b && a>=b : %d\n", a>b && a>=b);         //LOGICAL AND
    
    printf ("a>b || a==b : %d\n", a>b || a==b);         //LOGICAL OR

    printf ("! a<b : %d\n", !a<b);                      //LOGICAL NOT

    return 0;
}