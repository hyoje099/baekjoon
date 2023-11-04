#include <stdio.h>

int count_trailing_zeros(int n) {
    int count = 0;

    // 5의 배수의 개수를 세기
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int zeros = count_trailing_zeros(N);

    printf("%d\n", zeros);

    return 0;
}
