#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int a[100], count[10] = {0};
	int i,t,n=100;
	srand((unsigned)time(&t));
	for (i = 0; i < n; i++) {
		a[i]=rand() % 10+1;
	}
	for (i = 0; i < n; i++) {
		count[a[i]]++;
	}
	for (i = 0; i < 10; i++) {
		printf("%d出现的次数为%d\n", i, count[i]);
	}
	return 0;
}
