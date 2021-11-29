#include<stdio.h>
int main() {
    int a[50];
    int i = 0;
    int n = 20;
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    printf("%d %d ", a[1],a[2]);
    for (i = 3;i <= n;i++) {
        a[i] = a[i - 1] + a[i - 2];
        printf("%d ", a[i]);
    }
}