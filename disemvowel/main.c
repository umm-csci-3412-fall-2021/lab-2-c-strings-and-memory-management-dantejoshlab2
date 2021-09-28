#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  char *result;
  
  size = 100;
  line = (char*) malloc (size + 1);
  while (getline(&line, &size, stdin) > 0) {
    /* Put result of disemvowel in result variable */
    result = disemvowel(line);
    printf("%s\n", result);
    /* Free the memory that result points to */
    free(result);
  }
  free(line);
}
