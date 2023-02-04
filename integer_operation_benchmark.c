#include <stdio.h>
#include <time.h>

int main(){
    int i = 0;
    clock_t start, end;

    int32_t int1 = 1962, int2 = 2002, int_sum = 0;
    start = clock();
    while (i < 10000){
        /* 10^10 additions (of integer constants)*/
        int_sum = int1 + int2;
        i ++;
    }
    end = clock();
    printf("32-bit Integer Operation Benchmark");
    printf("\nReference Time: 100 seconds");
    printf("\nTime Taken: %lf seconds",(double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}