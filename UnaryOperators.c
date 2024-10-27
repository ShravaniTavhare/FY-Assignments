//To understand Unary Operators in C

#include <stdio.h>

int main() {
    int a=1;

    printf ("+a= %d\n", +a);          //UNARY PLUS

    printf ("-a= %d\n", -a);          //UNARY MINUS

    printf ("a++ = %d\n", a++);       //INCREMENT

    printf ("a-- = %d\n", a--);       //DECREMENT

    return 0;
}