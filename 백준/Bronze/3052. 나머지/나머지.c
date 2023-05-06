#include <stdio.h>

int main() {
    int nums[10];
    int mods[42] = { 0, };
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        int mod = nums[i] % 42;
        mods[mod]++;
    }
    int cnt = 0;
    for (int i = 0; i < 42; i++) {
        if (mods[i] > 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
