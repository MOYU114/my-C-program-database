#include<stdio.h>
int f1(int n);
int f2(int n);
int main() {
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("�ݹ���:%d\n", f1(n));
	printf("ѭ����:%d", f2(n));
}
int f1(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + f1(n - 1);
	}
}
int f2(int n) {
	int a = 0, i;
	while (n) {
		a += n;
		n--;
	}
	return a;
}