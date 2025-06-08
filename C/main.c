#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, world!\n");
    printf("This is a simple C program.\n");
//Data Types 

    int integerVar = 10; // Integer type
    float floatVar = 3.14f; // Floating-point type
    char charVar = 'A'; // Character type
    double doubleVar = 2.71828; // Double precision floating-point type
    long longVar = 1234567890L; // Long integer type
    short shortVar = 32767; // Short integer type
    unsigned int unsignedIntVar = 42; // Unsigned integer type
    long long longLongVar = 9223372036854775807LL; // Long long integer type
    signed int signedIntVar = -42; // Signed integer type
    unsigned char unsignedCharVar = 'B'; // Unsigned character type
    // Printing the values of the variables
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("Double: %.5f\n", doubleVar);
    printf("Long: %ld\n", longVar);
    printf("Short: %d\n", shortVar);
    printf("Unsigned Integer: %u\n", unsignedIntVar);
    printf("Long Long: %lld\n", longLongVar);
    printf("Signed Integer: %d\n", signedIntVar);
    printf("Unsigned Character: %c\n", unsignedCharVar);
    // Example of a pointer
    int *ptr = &integerVar; // Pointer to an integer variable
    printf("Pointer to Integer: %p\n", (void*)ptr);
    // Example of a constant
    const int constantVar = 100; // Constant integer variable
    printf("Constant Integer: %d\n", constantVar);
    // Example of a typedef
    typedef unsigned long ulong; // Typedef for unsigned long
    ulong typedefVar = 5000UL; // Using the typedef
    printf("Typedef Unsigned Long: %lu\n", typedefVar);
    
    return 0;
}
