#include <stdio.h>
 
int main()
{
    int year;
 
    printf("�������: ");
    scanf("%d",&year);
 
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // ��������� 400 ����������
            if ( year%400 == 0)
                printf("%d ������", year);
            else
                printf("%d ��������", year);
        }
        else
            printf("%d ������", year );
    }
    else
        printf("%d ��������", year);
   return 0;
}
//���� 
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
