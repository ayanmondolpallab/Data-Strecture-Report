#include <stdio.h>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1);
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: fibonacci of 0 is 0 and fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    // Recursive case: fibonacci of n is the sum of fibonacci of (n-1) and fibonacci of (n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate and display the factorial of the number
    int fact = factorial(num);
    printf("Factorial of %d is %d.\n", num, fact);

    // Calculate and display the nth Fibonacci number
    int fib = fibonacci(num);
    printf("The %dth Fibonacci number is %d.\n", num, fib);

    return 0;
}

