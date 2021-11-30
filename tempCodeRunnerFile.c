#include<stdio.h>
int main(){
    int a[100][100];
    a[1][1]=1;
    a[2][1]=a[2][2]=1;
    int i,j,k,n;
    scanf("%d",n);
    for(j=3;j<=n;j++){
            for(k=2;k<j-1;k++)
            a[j][k]=a[j-1][k]+a[j-1][k+1];//give the value to the space
        }
    for(i=1;i<n;i++){
        for(j=1;j<n-1;j++){
            printf("  ");//give some space to the trigle
        }
        //for(j=3;j<=n;j++){
            //for(k=2;k<j-1;k++)
            //a[j][k]=a[j-1][k]+a[j-1][k+1];//give the value to the space
        //}
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(i=j)
                printf("%4d\n",a[i][j]);
                else
                printf("%4d",a[i][j]);
            }
        }
    }
}