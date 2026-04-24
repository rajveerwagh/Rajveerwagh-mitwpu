#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void primeFactors(int num) {
    printf("Prime Factors: ");
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nSquare Root = %.2lf\n", sqrt(num));
    printf("Square = %d\n", num * num);
    printf("Cube = %d\n", num * num * num);

    if (isPrime(num))
        printf("Prime: YES\n");
    else
        printf("Prime: NO\n");

    long long fact = factorial(num);
    if (fact == -1)
        printf("Factorial not defined for negative numbers\n");
    else
        printf("Factorial = %lld\n", fact);

    if (num > 1)
        primeFactors(num);
    else
        printf("No prime factors\n");

    return 0;
}
