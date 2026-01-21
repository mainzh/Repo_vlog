#include <stdio.h>
#include "add.h"

int main() {
    printf("Hello, World!\n");

    int a = 1;
    int b = 2;
    int c = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, c);
    return 0;
}