void selection_sort(int a[], int len) 
{
    int i,j,temp;
 
    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;                  // ��¼��Сֵ����һ��Ԫ��Ĭ����С
        for (j = i + 1; j < len; j++)     // ����δ�����Ԫ��
        {
            if (a[j] < a[min])    // �ҵ�Ŀǰ��Сֵ
            {
                min = j;    // ��¼��Сֵ
            }
        }
        if(min != i)
        {
            temp=a[min];  // ������������
            a[min]=a[i];
            a[i]=temp;
        }
        /* swap(&a[min], &a[i]);  */   // ʹ���Զ��庯�����Q
    }
}
 
/*
void swap(int *a,int *b) // ������������
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
