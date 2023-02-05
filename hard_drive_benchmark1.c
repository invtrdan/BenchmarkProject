#include <stdio.h>
#include <time.h>

#define FILE_SIZE 1000000000
#define BLOCK_SIZE 100

int main(){
  FILE *fp;
  char buf[BLOCK_SIZE];
  
  // Open the input.bin file for writing
  fp = fopen("input.bin", ""wb);
  if (!fp){
    printf("\nError opening the 'input.bin' file for writing.");
    return 1;
  
  return 0;
}
