#include <stdlib.h>
#include <time.h>
#include <limits.h>

#include "typedefs.h"

/*
 * Initialize random number generator
 */
void rand_init() {
#ifdef USE_RAND
   srand(time(NULL));
#else
   srandom(time(NULL));
#endif
}

/*
 * Generate a random number within range
 */
int rand_value(int range) {
#ifdef USE_RAND
   return ((int)((float)range * rand() / (RAND_MAX + 1.0)));
#else
   return (random() % range);
#endif
}

/*
 * Convert an str to long. Returns TRUE if successful,
 * FALSE otherwise.
 */
bool str2int(int* i,const char* str) {
   char *endptr;
   *i = strtol(str,&endptr,0);
   if (*str == '\0' || *endptr != '\0' || *i == LONG_MIN || 
           *i == LONG_MAX || *i < INT_MIN || *i > INT_MAX) {
       return FALSE;
   }
   return TRUE;
}
