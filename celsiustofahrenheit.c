#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    scanf("%lf", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2lf\n", fahrenheit);

    return 0;
}
