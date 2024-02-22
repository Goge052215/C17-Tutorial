#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int int_func(int a) {
    return a; // The int function returns an integer
}
double double_func(double a) {
    return a; // The double function returns a 'double' type number
}
bool bool_func() {
    return true; // The bool function returns either true of false
}

// Calculates the average of two numbers
double avg_calculation(double a, double b) {
    return (a + b) / 2;
}

void average() {
    double a, b;

    printf("Enter the first number: ");
    scanf("%lf", &a); // Enter the first number (in 'double' format)
    printf("Enter your second number: ");
    scanf("%lf", &b); // Enter the second number (in 'double' format)

    printf("The average number is: %lf", avg_calculation(a, b));
}

// To judge whether a number is prime, we use bool type func
bool isPrime(int n) {
    int divisor;

    if (n <= 1) {
        return false;
    }
    for (divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }

    return true;
}

void prime() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
}

// An example of recursive
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(void) {
    average();
    prime();
    return 0;
}
