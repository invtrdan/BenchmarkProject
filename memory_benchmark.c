#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 500000
#define BYTES_PER_ELEMENT 4

int main(){
  int i;
  clock_t start, end;
  int *data = malloc(NUM_ELEMENTS * BYTES_PER_ELEMENT);
  if (data == NULL) {
    printf("Error allocating memory!\n");
    return 1;
  }
  
  return 0;
}
