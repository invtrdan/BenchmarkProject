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
    
  for (int i = 0; i < FILE_SIZE / BLOCK_SIZE; i++) {
    // Write a block of data
    fwrite(buf, BLOCK_SIZE, 1, fp);
  }
    
  // Close the file
  fclose(fp);
    
  clock_t start_time, end_time;
  FILE *fp_read, *fp_write;
    
  // Open the input.bin file for reading
  fp_read = fopen("input.bin", "rb");
  if (!fp_read) {
    printf("Error opening file for reading\n");
    return 1;
  }
    
  // Open the output.bin file for writing
  fp_write = fopen("output.bin", "wb");
  if (!fp_write) {
    printf("Error opening file for writing\n");
    return 1;
  }
    
  start_time = clock();
    
  for (int i = 0; i < FILE_SIZE / BLOCK_SIZE; i++){
    // Read 100 bytes from input.bin
    fread(buf, BLOCK_SIZE, 1, fp_read);
    
    // Write 100 bytes to output.bin
    fwrite(buf, BLOCK_SIZE, 1, fp_write);
  }
    
  end_time = clock();
  
  // Close the files
  fclose(fp_read);
  fclose(fp_write);
    
  return 0;
}
