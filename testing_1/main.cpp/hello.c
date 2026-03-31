#include <stdio.h>

int main() {
    int b=42;
    int*a=&b;
    printf("Memory address of b: %p\n", a );
    printf("Memory address of b: %p\n", &b);
}"))