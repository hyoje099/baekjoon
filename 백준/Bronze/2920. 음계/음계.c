#include <stdio.h>
int main(void) {
	int n[8] = { 0 }, ck = 0;
	int as[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int ds[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

	for (int i = 0; i < 8; i++)	scanf("%d", &n[i]);

	for (int i = 0; i < 8; i++) {
		if (as[i] != n[i]) {
			ck = 0;
			break;
		}
		else ck = 1;
	}
	if (ck == 1) {
		printf("ascending");
		return 0;
	}
	for (int i = 0; i < 8; i++) {
		if (ds[i] != n[i]) {
			ck = 0;
			break;
		}
		else ck = 2;
	}
	if (ck == 2) {
		printf("descending");
		return 0;
	}
	printf("mixed");
	return 0;
}