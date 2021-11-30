#include<stdio.h>
int cnt=0;
int hanoi(int n,char a,char b,char c);
int main(){
    
    hanoi(3,'a','b','c');
printf("total move:%d",cnt);
}
int hanoi(int n,char a,char b,char c){
    if(n==1){
        printf("%c->%c\n",a,c);cnt++;
        
    }else{
        hanoi(n-1,a,c,b);
        printf("%c->%c\n",a,c);cnt++;
        hanoi(n-1,b,a,c);
    }
}