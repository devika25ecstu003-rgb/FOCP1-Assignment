#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    // Step 1: Get number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Step 2: Handle simple cases
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    // Step 3: Print the first two terms
    for (i = 1; i <= n; i++) {
        printf("%lld ", first);    // print current number
        next = first + second;     // next = sum of previous two
        first = second;            // move forward
        second = next;
    }

    printf("\n");
    return 0;
}

