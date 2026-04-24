#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    double x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, 2*i + 1) / factorial(2*i + 1);
        sum += term;
    }

    printf("Sum of sine series = %.6lf\n", sum);

    return 0;
}
