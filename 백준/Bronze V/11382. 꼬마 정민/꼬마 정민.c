#include <stdio.h>

int main(void) {
    
    long long A = 0, B = 0, C = 0;


    //visual studio의 경우 scanf_s("%lld %lld %lld", &A, &B, &C);
    scanf("%lld %lld %lld", &A, &B, &C);
    
    printf("%lld", A + B + C);

    return 0;
}