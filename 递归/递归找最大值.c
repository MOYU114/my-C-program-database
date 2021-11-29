#include<stdio.h>
int max(int a[],int n);
int main() {
	int a[100];
	int n, i,result;
	printf("请输入要输入的数个数：");
	scanf("%d", &n);
	printf("请输入数组的值：");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("最大的数是%d，",result=max(a, n));
	for (i = 0;i < n;i++) {
		if (a[i] == result) {
			printf("是数组中的第%d个。", i + 1);
		}
	}

}
int max(int a[],int n) {
	
	if (n > 1) {
		int t;
		t=max(a, n - 1);
		return (t > a[n - 1]) ? t : a[n - 1];
	}
	else
		return a[0];

}