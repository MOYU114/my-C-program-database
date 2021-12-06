#include<stdio.h>
int linesearch(int a[],int len,int k){
    int i;
    for(i=0;i<len;i++){
        if(a[i]==k){
            return 1;
        }
    }
    return 0;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int len=7,k=8;
    if(linesearch(a,len,k)){
        printf("Found!");
    }else{
        printf("Not found!");
    }
}