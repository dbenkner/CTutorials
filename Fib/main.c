#include <stdio.h>
#include <stdlib.h>

int main (void){
    char a[2];
    int b;
    while(tolower(a[0]) != 'q')
    {
        printf("Please enter a number smaller than 41\n");
        scanf(" %s", &a);
        if(tolower(a[0]) == 'q') {
            break;
        }
        b = atoi(a);
        if(b <= 0) {
            printf("%s is not a valid input\n", a);
            continue;
        }
        if(b < 41) {
            long ans = fib(b);
            printf("Fib of the %i number is %li\n", b, ans);
        }
        if(b > 40) {
            printf("%i is too big of a number\n", b);
        }
    }
}

long fib (int num) {
    long fibArr[40];
    fibArr[0] = 0;
    fibArr[1] = 1;
    if(num <= 0) {
        return 0;
    }
    for(int i = 2; i < num; i++) {
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
    }
    return fibArr[num -1];
}
