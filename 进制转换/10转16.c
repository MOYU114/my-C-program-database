#include<stdio.h>
void sixteen(int a[], int b[]);
int main() {
	//int i = 0, cnt = 0;;
	int a[100],b[100];
	printf("输入十进制数：");
	scanf("%d", &b[0]);
	sixteen(a, b);
	return 0;
}
void sixteen(int a[],int b[]) {
	int i, cnt = 0;
	for (i = 0;b[i] != 0;i++) {
		a[i] = b[i] % 16;
		b[i + 1] = b[i] / 16;
		cnt++;
	}
	printf("转为十六进制为：");
	for (i = cnt - 1;i >= 0;i--) {
		if (a[i] <= 9 && a[i] >= 0) {
			printf("%d", a[i]);
		}
		else {
			switch (a[i]) {
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
			}
		}

	}

}
