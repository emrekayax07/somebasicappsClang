#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the age is 18 or above
    if (age >= 18) {
        printf("The person can vote.\n");
    } else {
        printf("The person cannot vote.\n");
    }

    return 0;
}
