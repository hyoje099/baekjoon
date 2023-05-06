#include <stdio.h>

int main() {
    int N, X, A;
    scanf("%d %d", &N, &X); // N과 X를 읽어들임
    for(int i=0; i<N; i++) {
        scanf("%d", &A); // 수열 A의 값 하나를 읽어들임
        if(A < X) printf("%d ", A); // X보다 작은 수를 찾아 출력
    }
    return 0;
}
