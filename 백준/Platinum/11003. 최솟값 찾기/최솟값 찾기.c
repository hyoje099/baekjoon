#include <stdio.h>
int N, L;
#define MAX_N 5000000
typedef struct st {
	int index, value;
}STACK;
int Wp, Rp, idx;
STACK stack[MAX_N+1];
int D[MAX_N + 1];


void solve(int i,int a) {
	//맨 먼저 들어간 놈의 인덱스가 범위를 벗어날 경우
	if (stack[Rp].index <= i - L) {
		Rp++;
	}
	while (1) {
		//스택이 비었거나 들어오는 놈(a)가 스택의 탑(마지막요소)보다 큰 경우
		if (Wp == Rp || stack[Wp - 1].value < a) {
			stack[Wp].index = i;
			stack[Wp++].value = a;
			break;
		}
		Wp--;
	}

	D[idx++] = stack[Rp].value;
}

int main() {
	scanf("%d %d", &N, &L);
	int a;
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (i == 0) {
			stack[Wp].index = 0;
			stack[Wp++].value = a;
			D[idx++] = a;
			continue;
		}
		solve(i,a);
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", D[i]);
	}
	return 0;
}