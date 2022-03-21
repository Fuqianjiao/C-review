//输入两个正整数m和n，求其最大公约数和最小公倍数。
#include <stdio.h>
int main()
{
    int m, n;         //输入的数字
    int j, k;         //用于计算的变量
    int lcm, gcd = 1; // lcm最大公因数 gcd最小公倍数
    scanf("%d %d", &m, &n);
    j = m, k = n;
    if (j > k)
    {
        j = n, k = m; //确保j为小的那个
    }
    for (int i = 2; i <= j; i++)
    { //循环i到j的因子(i会被重置)
        if (j % i == 0 && k % i == 0)
        { //判断i是否为j和k的因子
            j /= i;
            k /= i;
            gcd *= i;
            i = 1; //将i重置
        }
    }
    lcm = gcd * j * k;
    printf("%d %d", gcd, lcm);
    return 0;
}
