#include<stdio.h>
int main(){
    int a[100][100];
   
    int i,j,k,n;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
        a[i][1] = a[i][i] = 1;  /*���ߵ�������Ϊ1����Ϊ����ѭ����1��ʼ������Ϊa[i][1]Ϊ��һ����*/
    for(j=3;j<=n;j++){
            for(k=2;k<=j-1;k++)
            a[j][k]=a[j-1][k-1]+a[j-1][k];//give the value to the space
        }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("   ");//give some space to the trigle
        }
            for(j=1;j<=i;j++){
                printf("%6d",a[i][j]);
                
            }
			printf("\n");
    }
	printf("\n");
}
