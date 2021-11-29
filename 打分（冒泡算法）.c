#include<stdio.h>
int bubble(int mark[], int a);
int main() {
	int mark[10];
	int i,add;
	for (i = 0;i < 10;i++) {
		scanf("%d", &mark[i]);
		if (mark[i] >= 80 && mark[i] <= 100) {
			continue;
		}
		else {
			printf("请评委重新输入：");
			i--;
		}
	}
	bubble(mark, 10);
	for (i = 0;i < 10;i++) {
		printf("%d ", mark[i]);
		}
	scanf("%d", &add);
	for (i = 0;i < 9;i++) {
		if (mark[i] >= add && mark[i + 1] <= add) {
			printf("%d ", add);
			printf("%d ", mark[i]);
		}
		else {
			printf("%d ", mark[i]);
		}
	}
	return 0;
}
int bubble(int* mark[], int a) {
	int i,j,tem;
	for (i = 0;i < a-1;i++) {
		for (j = 0;j < a - i-1;j++) {
			if (mark[j] < mark[j + 1]) {
				tem = mark[j];
				mark[j] = mark[j + 1];
				mark[j + 1] = tem;
			}
		}
	}
	
}