#include <stdio.h>
#include "Conversion.h"

int main() {
    const double lower = 0.0, upper = 100.0, step = 10.0;

    printf("Fahrenheit -> Celsius\n");
    for (double f = lower; f <= upper; f += step) {
        printf("%6.2f F = %6.2f C\n", f, Celsius(f));
    }

    printf("\nCelsius -> Fahrenheit\n");
    for (double c = lower; c <= upper; c += step) {
        printf("%6.2f C = %6.2f F\n", c, Farenheit(c));
    }

    return 0;
}
