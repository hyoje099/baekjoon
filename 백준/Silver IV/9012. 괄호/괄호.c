#include<stdio.h>
#include<string.h>
 
int main() {
	int T, t, i, len;
	scanf("%d", &T);
	char st[51];
	int left = 0, right = 0;	// left: '('의 개수, right: ')'의 개수
 
	for (t = 0; t < T; t++) {
		scanf("%s", st);
		len = strlen(st);
		for (i = 0; i < len; i++) {
			if (st[i] == '(') left++;
			else if (st[i] == ')') right++;
 
			if (right > left)
				break;
		}
		if (left != right)
			printf("NO\n");
		else
			printf("YES\n");
		left = 0;	// '('의 개수 초기화
		right = 0;	// ')'의 개수 초기화
	}
}