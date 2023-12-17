#ifndef FACTOR_H
#define FACTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to factorize a number into two smaller numbers
void factorize(int number, int *factor1, int *factor2);

// Function to read numbers from a file and print their factorization
void factorizeFromFile(const char *file_path);

#endif // FACTOR_H
