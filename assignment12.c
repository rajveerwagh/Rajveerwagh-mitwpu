#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute smallest common divisor (>1)
int smallestCommonDivisor(int a, int b) {
    int min = (a < b) ? a : b;

    for (int i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1; // if no common divisor other than 1
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd_result = gcd(num1, num2);
    int scd_result = smallestCommonDivisor(num1, num2);

    printf("Smallest Common Divisor = %d\n", scd_result);
    printf("Greatest Common Divisor = %d\n", gcd_result);

    return 0;
}
