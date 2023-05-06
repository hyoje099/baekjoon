#include <stdio.h>

int cnt[10001]; // 입력 수의 개수를 저장할 배열

int main() {
    int n, num;

    scanf("%d", &n);

    // 입력 수의 개수를 카운팅
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt[num]++;
    }

    // 정렬된 결과 출력
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
