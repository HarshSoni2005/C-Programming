#include <stdio.h>

int main() {
    // Declare and initialize a variable
    int num = 42;

    // Declare a pointer and initialize it with the address of the variable
    int *ptr = &num;

    // Access the value through the pointer (dereferencing)
    printf("Value of num: %d\n", *ptr);

    // Modify the value through the pointer
    *ptr = 100;

    // Verify the change in the original variable
    printf("Modified value of num: %d\n", num);

    return 0;
}

