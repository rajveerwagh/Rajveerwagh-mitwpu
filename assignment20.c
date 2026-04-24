#include <stdio.h>

// Swap without pointers (call by value)
void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapWithoutPointers: a = %d, b = %d\n", a, b);
}

// Swap with pointers (call by reference)
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swap: x = %d, y = %d\n", x, y);

    // Without pointers
    swapWithoutPointers(x, y);
    printf("After swapWithoutPointers (in main): x = %d, y = %d\n", x, y);

    // With pointers
    swapWithPointers(&x, &y);
    printf("After swapWithPointers (in main): x = %d, y = %d\n", x, y);

    return 0;
}
