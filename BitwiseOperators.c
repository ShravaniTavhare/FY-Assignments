// To understand Bitwise Operators in C

#include <stdio.h>

int main() {
    int a=40, b=20;

    printf ("a & b : %d\n", a&b);         //BITWISE AND

    printf ("a | b : %d\n", a|b);         //BITWISE OR

    printf ("a ^ b : %d\n", a^b);         //BITWISE XOR

    printf ("~a : %d\n", ~a);             //BITWISE FIRST COMPLEMENT

    printf ("a << b : %d\n", a<<b);       //BITWISE LEFTSHIFT

    printf ("a >> b : %d\n", a>>b);       //BITWISE RIGHTSHIFT

    return 0;
}