#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial using a while loop
    while (n > 1) {
        factorial *= n;
        n--;
    }

    // Print the factorial
    printf("Factorial: %lld\n", factorial);

    return 0;
}
