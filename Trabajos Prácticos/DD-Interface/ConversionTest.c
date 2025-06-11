#include <assert.h>
#include "Conversion.h"

int main() {
    assert(Celsius(32.0) == 0.0);
    assert(Farenheit(0.0) == 32.0);
    return 0;
}
