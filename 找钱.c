#include<stdio.h>
int main() {
	int num;
	int a, b, c, d, e, f;
	printf("请输入一个金额:");
	scanf("%d", &num);
	a = num / 100;
	b = (num - a * 100) / 50;
	c = (num - a * 100 - b * 50) / 10;
	d = (num - a * 100 - b * 50 - c * 10) / 5;
	e = (num - a * 100 - b * 50 - c * 10 - d * 5) / 2;
	f = (num - a * 100 - b * 50 - c * 10 - d * 5 - e * 2) / 1;
	printf("%d=", num);
	if (a != 0) {
		printf("100*%d", a);
	}
	if (b != 0) {
		printf("+50*%d", b);
	}
	if (c != 0) {
		printf("+10*%d", c);
	}
	if (d != 0) {
		printf("+5*%d", d);
	}
	if (e != 0) {
		printf("+2*%d", e);
	}
	if (f != 0) {
		printf("+1*%d", f);
	}
	return 0;
}
