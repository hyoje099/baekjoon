#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
int main() {
	int n=0, c=0;
	scanf("%d %d", &n, &c);
	int x = n, y = n;
	int x1 = 0, y1 = 0;
	int xx = 0, yy = 0;
	for (int i = 0; i < c; i++) {
		scanf("%d %d", &xx, &yy);
		x1 = (xx)*y;
		y1 = yy * x;
		if (xx > x ) {
			return;
		}
		else if (yy > y) {
			return;
		}
		if (x1 > y1) {
			x = xx;
		}
		else if (x1 == y1) {
			x = xx;
		}
		else {
			y = yy;
		}
	}
	printf("%d", x * y);
}