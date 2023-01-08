#pragma warning(disable: 4996)
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int q[10001] = { 0, };
int res = 0;
int push_(int a) {
	q[res] = a;
	res++;
}
int pop_() {
	int i;
	if (q[0] == 0 && res == 0)
		printf("-1\n");
	else {
		printf("%d\n", q[0]);
		for (i = 0; i < res; i++) {
			q[i] = q[i + 1];
		}
		q[res] = 0;
		res--;
	}
}
int size_() {
	printf("%d\n", res);
}
int empty_() {
	if (q[0] == 0 && res == 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}
int front_() {
	if (q[0] == 0 && res == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", q[0]);
	}
}
int back_() {
	if (q[0] == 0 && res == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", q[res - 1]);
	}
}
int main() {
	char a[6];
	int task, i, v;
	char* push = "push",*  pop = "pop",*  size = "size",*  empty = "empty",*  front = "front",*  back = "back";
	scanf("%d", &task);

	for (i = 0; i < task; i++) {

		scanf("%s", a);

		if (strcmp(a, push) == 0) {
			scanf("%d", &v);
			push_(v);
		}
		else if (strcmp(a, pop) == 0) {
			pop_();
		}
		else if (strcmp(a, size) == 0) {
			size_();
		}
		else if (strcmp(a, empty) == 0) {
			empty_();
		}
		else if (strcmp(a, front) == 0) {
			front_();
		}
		else if (strcmp(a, back) == 0) {
			back_();
		}
	}
}
