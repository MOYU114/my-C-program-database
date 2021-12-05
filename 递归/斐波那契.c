int fibo(int n)
{
        if(n == 1 || n == 2)
                return 1;
        return fibo(n-1)+fibo(n-2);

}
int main()
{
        int n,result;
        printf("请输入：");
        scanf("%d",&n);
        result = fibo(n);
        printf("%d\n",result);
}