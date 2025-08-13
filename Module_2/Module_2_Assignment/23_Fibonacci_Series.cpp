/* 5. Functions 
 
23.LAB EXERCISE 1: Fibonacci Sequence 
 
->Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
function. 
->Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
and recursive methods. Compare their efficiency.*/

#include <stdio.h>
#include <time.h>

// Recursive function to get Fibonacci number
int fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// Iterative function to get Fibonacci number
int fib_iterative(int n) {
    int a = 0, b = 1, c;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    clock_t start, end;
    double time_r, time_i;

    printf("Enter N terms: ");
    scanf("%d", &n);

    // Print sequence using recursion
    printf("\nFibonacci sequence (Recursive):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib_recursive(i));
    }
    printf("\n");

    // Recursive Nth Fibonacci
    start = clock();
    int r = fib_recursive(n - 1);
    end = clock();
    time_r = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Iterative Nth Fibonacci
    start = clock();
    int it = fib_iterative(n - 1);
    end = clock();
    time_i = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Results
    printf("\nNth Fibonacci (Recursive) = %d", r);
    printf("\nTime taken (Recursive) = %lf sec", time_r);

    printf("\nNth Fibonacci (Iterative) = %d", it);
    printf("\nTime taken (Iterative) = %lf sec\n", time_i);

    return 0;
}

