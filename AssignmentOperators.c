//To understand Assignment Operators in C

#include <stdio.h>

int main() {
    int a=50, b=25;

    printf ("a = b : %d\n", a=b);         //SIMPLE ASSIGNMENT

    printf ("a += b : %d\n", a+=b);       //PLUS AND ASSIGN

    printf ("a -= b : %d\n", a-=b);       //MINUS AND ASSIGN

    printf ("a *= b : %d\n", a*=b);       //MULTIPLY AND ASSIGN

    printf ("a /= b : %d\n", a/=b);       //DIVIDE AND ASSIGN

    printf ("a %= b : %d\n", a%=b);       //MODULUS AND ASSIGN

    printf ("a &= b : %d\n", a&=b);       //AND AND ASSIGN

    printf ("a |= b : %d\n", a|=b);       //OR AND ASSIGN

    printf ("a ^= b : %d\n", a^=b);       //XOR AND ASSIGN

    printf ("a <<= b : %d\n", a<<=b);     //LEFTSHIFT AND ASSIGN

    printf ("a >>= b : %d\n", a>>=b);     //RIGHTSHIFT AND ASSIGN

    return 0;
}