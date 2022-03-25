#include <stdio.h>
int main()
{
    int a[10], i, j;
    for (i = 0; i < 10; i++)//注意这边是从i=0开始，到i<10
    {
        scanf("%d", &a[i]);
    }
    for (j = 9; j >= 0; j--)//数组逆序输出，我们可以从j=9开始，一直做到j<0，就结束循环
    {
        printf("%d ", a[j]);//注意这边输出要空格隔开
    }
    return 0;
}
