#include <stdio.h>
#include <time.h>

int main(){
  double x = 225452315454.54654682, y = 2354356785.534658748, result;
  clock_t start, end;
  
  start = clock();
  
  for (int i = 0; i < 1000000000; i++) {
    result = x * y
  }
  
  end = clock();
  
  printf("Reference Time: 100 seconds");
  printf("Time taken for 1000000000 floating point multiplications: %.2lf seconds\n",((double) (end - start)) / CLOCKS_PER_SEC);
  
  return 0;
}
