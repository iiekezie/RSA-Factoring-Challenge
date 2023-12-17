#include "factorize.h"
#include <math.h>

void factorize(int number, int *factor1, int *factor2) {
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            *factor1 = i;
            *factor2 = number / i;
            return;
        }
    }
    *factor1 = number;
    *factor2 = 1;
}
