#include<stdio.h>
int max(int a[],int n);
int main() {
	int a[100];
	int n, i,result;
	printf("������Ҫ�������������");
	scanf("%d", &n);
	printf("�����������ֵ��");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("��������%d��",result=max(a, n));
	for (i = 0;i < n;i++) {
		if (a[i] == result) {
			printf("�������еĵ�%d����", i + 1);
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