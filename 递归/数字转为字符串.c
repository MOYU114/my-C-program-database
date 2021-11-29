#include<stdio.h>
int transform(int b);
int main() {
	int b;
	printf("ÇëÊäÈëÕûÊı£º");
	scanf("%d", &b);
	if (b < 0) {
		printf("-");
		b = -b;
		transform(b);
	}
	else {
		transform(b);
	}
}
int transform(int b) {
	int i;
	if ((i=b/10)!=0) {
		transform(i);
		
	}
	putchar('0'+b%10);

}