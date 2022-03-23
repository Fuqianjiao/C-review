#include <stdio.h>
int main()
{
    int n, N;
    double a = 1.0, b = 2.0; // a为分母 b为分子
    double sum = 2;
    scanf("%d", &N);
    for (n = 2; n <= N; n++)
    {
        if (n % 2 == 0)
        { //对偶数进行操作
            (a = a + b) / b;
            sum += a / b; //求和结果赋值给sum
        }
        if (n % 2 != 0)
        { //对奇数进行操作
            (b = a + b) / a;
            sum += b / a; //求和结果赋值给sum
        }
    }
    printf("%.2lf", sum);
    return 0;
}
