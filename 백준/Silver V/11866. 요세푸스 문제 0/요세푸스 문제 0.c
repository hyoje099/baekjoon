#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, N, K, cnt, idx;

	scanf("%d %d", &N, &K);

	int* table = (int*)calloc(N, sizeof(int));

	for (i = 0; i < N; i++) /*값 채워넣기*/
	{
		table[i] = i + 1;
	}

	printf("<%d", table[K - 1]); /*첫번째 제거 처리*/
	table[K - 1] = -1;

	for (i = 0, idx = K; i < N - 1; i++) /*두번째 제거부터 시작*/
	{
		cnt = 0; j = -1;
		while (cnt < K) /* 값이 존재하는 배열을 K번 지날때까지 j += 1 */
		{
			j += 1;
			if (table[(idx + j) % N] != -1)
				cnt += 1;
		}
		idx = (idx + j) % N; /*인덱스 갱신*/
		printf(", %d", table[idx]);
		table[idx] = -1;
	}
	printf(">");
	return 0;
}