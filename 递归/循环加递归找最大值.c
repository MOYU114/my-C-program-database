#include<stdio.h>
int f1(int a[], int n);
int f2(int a[], int n);
int main() {
	int n,i,result;
	int a[100];
	printf("数组个数：");
	scanf("%d", &n);
	printf("请输入数组：");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("递归求法:");
	printf("最大的数是%d，", result = f1(a, n));
	for (i = 0;i < n;i++) {
		if (a[i] == result) {
			printf("是数组中的第%d个。\n", i + 1);
		}
	}
	printf("循环求法:");
	f2(a, n);
}
int f1(int a[],int n) {
	if (n > 1) {
		int t;
		t = f1(a, n - 1);
		return (t > a[n - 1]) ? t : a[n - 1];
	}
	else
		return a[0];
}
int f2(int a[], int n) {
	int max = a[0];
	int result = 0;
	for (int i = 1;i < n;i++) {
		if (max < a[i]) {
			max = a[i];
			result = i;
		}
	}
	printf("最大值为%d，位于第%d位", max, result+1);
}