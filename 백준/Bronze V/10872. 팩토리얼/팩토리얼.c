#include <stdio.h>
 
int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else return 1;
}
 
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", fact(N));
    return 0;
}