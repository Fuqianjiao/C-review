#include <stdio.h>
int main()
{
    int i, j; //作为循环的两个变量
    int N, a; // N为范围，a为素数的计数器
    scanf("%d", &N);
    for (i = 2; i <= N; i++) //因为1不是素数，所以i要从2开始
    {
        a = 0;                  // a要赋值为0 不然就会出错
        for (j = 2; j < i; j++) //第二个循环你判断i是否能被其他数整除
        {
            if (i % j == 0)
            {
                a++;
            }
        }
        if (a == 0)            // a=0如果这个数除了本身和1没有数能整除它就输出
            printf("%d\n", i); //输出这边要注意换行
    }
    return 0;
}
