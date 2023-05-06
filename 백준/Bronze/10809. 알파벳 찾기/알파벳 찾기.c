#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int idx[26]; // 알파벳의 등장 여부를 저장하는 배열

    scanf("%s", s);
    memset(idx, -1, sizeof(idx)); // 배열 초기화

    // 문자열의 각 문자를 순서대로 검사하면서
    // 알파벳이 처음 등장하는 위치를 찾음
    for (int i = 0; s[i]; i++) {
        int c = s[i] - 'a';
        if (idx[c] == -1) {
            idx[c] = i;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        printf("%d ", idx[i]);
    }
    printf("\n");

    return 0;
}
