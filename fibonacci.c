#include <stdio.h>

void fibonacci_iterative(int n) {
    long long first = 0, second = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Please enter a positive integer.\n");
    else
        fibonacci_iterative(n);

    return 0;
}

