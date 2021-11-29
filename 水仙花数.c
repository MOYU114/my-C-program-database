#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d",&n);

    int j = 1;
    int first = 1;
    while(j<n){
        first*=10;
        j++;
    }
    j = first;
    while(j<first*10){
        int k =j;
        int sum=0;
        do{
            int d=k%10;
            k/=10;
            int p =d;
            int q =1;
            while(q<n){
                p*=d;
                q++;
            }
            
            sum += p;
        }while(k<0);
        if (sum == j){
            printf("%d\n",j);
        }
        j++;
    }
}
