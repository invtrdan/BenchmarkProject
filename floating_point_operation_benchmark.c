#include <stdio.h>
#include <time.h>

int main(){
  double x = 285454.5482, y = 2356785.5348, result;
  clock_t start, end;
  start = clock();
  for (long i = 0; i < 100000000000; i++) {
    /* 10^10 additions (of floating constants)*/
    result = x + y;
  }
  for (long i = 0; i < 5000000000; i ++){
    /*5 x 10^9 multiplications (of floating constants)*/
    result = x * y;
  }
  for (long i = 0; i < 2000000000; i++){
    /* 2 X 10^9 divisions (of floating constants)*/
    result = x / y;
  }
  end = clock();
  printf("Reference Time: 100 seconds");
  printf("\nTime taken for 1000000000 floating point multiplications: %.2lf seconds\n",((double) (end - start)) / CLOCKS_PER_SEC);
  return 0;
}
