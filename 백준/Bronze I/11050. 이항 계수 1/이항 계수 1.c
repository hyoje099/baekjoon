#include<stdio.h>
 
int main() {
	int N, K, com = 1, i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < K; i++) {
		com *= N;
		N--;
	}
	for (i = K; i > 0; i--)
		com /= i;
	printf("%d", com);
	return 0;
}