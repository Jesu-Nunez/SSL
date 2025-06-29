#include "Conversion.h"

double Celsius(const double f) {
    return (5.0 / 9.0) * (f - 32.0);
}

double Farenheit(const double c) {
    return (9.0 / 5.0) * c + 32.0;
}
