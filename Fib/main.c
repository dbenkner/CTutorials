#include <stdio.h>

int main (void){
    int tot = 10;
    int ans = fib(tot);

    printf("Fib of the %i number is %i\n", tot, ans);
}


int fib (int num) {
    int fibArr[40];
    fibArr[0] = 0;
    fibArr[1] = 1;
    for(int i = 2; i < num; i++) {
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
    }
    return fibArr[num -1];
}
