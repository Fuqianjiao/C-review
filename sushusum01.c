#include <stdio.h>
int main()
{
    int count = 0;
    int sum = 0;
    int m, n;
    int i, j;
    scanf("%d %d", &m, &n);
    //本题要求统计给定整数 M 和 N 区间内素数的个数并对它们求和。
    for (i = m; i <= n; i++)
    { //在两个数字之间循环
        for (j = 2; j <= i; j++)
        { //找到可以整除的数
            if (i % j == 0)
                break;
        }
        if (j == i)
        { //如果找出的数与本身相等，说明这个数是质数
            sum += i;
            count += 1;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}
