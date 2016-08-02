#ifndef UTILS_H
#define UTILS_H

#include "typedefs.h"

/*
 * Initialize random number generator
 */
void rand_init();

/*
 * Generate a random number within range
 */
int rand_value(int range);

/*
 * Convert an str to long. Returns TRUE if successful,
 * FALSE otherwise.
 */
bool str2int(int* i, const char* str);

#endif	/* #ifndef UTILS_H */
