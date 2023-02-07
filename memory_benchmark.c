#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 500000
#define BYTES_PER_ELEMENT 4
#define NUM_ELEMENTS 50000

int main(){
  int i;
  clock_t start, end;
  int *data = malloc(NUM_ELEMENTS * BYTES_PER_ELEMENT);
  if (data == NULL) {
    printf("Error allocating memory!\n");
    return 1;
  }
  start = clock();
  for (int a = 0; a < 100000; a++){
    // Write to array elements
    for (int i = 0; i < 50000; i++){
      data[i] = i;
    }
    int num_sum = 0;
    for (int i = 0; i < 50000; i++){
      // Read from array elements, add to sum
      num_sum += data[i];
    }
  } 
  end = clock();
  printf("Reference Time: 100 sseconds");
  printf("\nTime taken to read and write from array elements: %lf seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  
//   free(data);
  return 0;
}
  
  
/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM_ELEMENTS 50000
#define BYTES_PER_ELEMENT 4

int main() {
    int i;
    clock_t start, end;
    int *data = malloc(NUM_ELEMENTS * BYTES_PER_ELEMENT);

    if (data == NULL) {
        printf("Error allocating memory!\n");
        return 1;
    }
    start = clock();
    for (int a = 0; a < 100000; a++){
        // Write to array elements
        for (int i = 0; i < 50000; i++) {
            data[i] = i;
        }
        // end = clock();
        // printf("Time taken to write to array elements: %lf seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC);

        // Read from array elements
        // start = clock();
        int sum = 0;
        for (int i = 0; i < 50000; i++) {
            sum += data[i];
        }
        // free(data);
    }
    end = clock();
    printf("Time taken to read and write from array elements: %lf seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC);

    free(data);

    return 0;
}
*/
