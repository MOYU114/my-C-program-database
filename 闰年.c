#include <stdio.h>
 
int main()
{
    int year;
 
    printf("输入年份: ");
    scanf("%d",&year);
 
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // 这里如果被 400 整数是闰年
            if ( year%400 == 0)
                printf("%d 是闰年", year);
            else
                printf("%d 不是闰年", year);
        }
        else
            printf("%d 是闰年", year );
    }
    else
        printf("%d 不是闰年", year);
   return 0;
}
//函数 
int isrun(int n) {
    if (n % 400 == 0) {
       return 1;
    }
    else {
        if (n % 4 == 0 && n % 100 != 0)
            return 1;
        else
            return 0;
    }
}
