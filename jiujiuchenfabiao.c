#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)//内循环
    {
        for (j = 1; j <= 9; j++)//外循环
        {

            printf("%d*%d=%d ", i, j, i * j);
        }
        printf("\n"); //使程序每打印完第一行的乘法表之后，再换行
    }
    return 0;
}
