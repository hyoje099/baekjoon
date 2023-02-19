#include <stdio.h>

int main(void) {
    int a,b;
    while(scanf("%d %d", &a, &b)!=EOF) {
        printf("%d\n", a+b);
    }
}
/*EOF는 End Of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 상수입니다.
즉, scanf("%d %d", &a, &b)!=EOF의 의미는 파일의 끝에 도달할 때까지 while문을 실행한다는 의미입니다.*/
