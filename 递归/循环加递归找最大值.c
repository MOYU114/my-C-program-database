#include<stdio.h>
int f1(int a[], int n);
int f2(int a[], int n);
int main() {
	int n,i,result;
	int a[100];
	printf("���������");
	scanf("%d", &n);
	printf("���������飺");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("�ݹ���:");
	printf("��������%d��", result = f1(a, n));
	for (i = 0;i < n;i++) {
		if (a[i] == result) {
			printf("�������еĵ�%d����\n", i + 1);
		}
	}
	printf("ѭ����:");
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
	printf("���ֵΪ%d��λ�ڵ�%dλ", max, result+1);
}