#include<stdio.h>
int main() {
	int b,c;
	printf("������Ҫ�������λ����");
	scanf("%d", &b);
	for (int i = 0;i < 3;i++) {
		c = b % 10;
		b /= 10;
		printf("%d ",'0'+ c);
	}
	
	return 0;
}