#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;

    int32_t int1 = 1962, int2 = 2002, int_sum = 0, int_product = 0, int_quotient = 0;
    start = clock();
    for (long i = 0; i < 100000000000 i++){
        /* 10^10 additions (of integer constants)*/
        int_sum = int1 + int2;
    }
    for (long i = 0; i < 5000000000; i ++)
    {
        /*5 x 10^9 multiplications (of integer constants)*/
        int_product = int1 * int2;
    }
    
    for (long i = 0; i < 2000000000; i++){
        /* 2 X 10^9 divisions (of integer constants)*/
        int_quotient = int2 / int1;
    }
    
    end = clock();
    printf("32-bit Integer Operation Benchmark");
    printf("\nReference Time: 100 seconds");
    printf("\nTime Taken: %lf seconds",(double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
