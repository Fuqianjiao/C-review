#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, n;
    scanf("%lf", &n); //输入要平方根的数
    b = n / 2;
    a = (b + n / b) / 2.0; //迭代公式
    while ((b - a) > 0.00001)
    {
        double temp = a;
        a = (a + n / a) / 2.0;
        b = temp;
    }
    printf("%0.3lf", a); //输出的格式保留三位小数
    return 0;
}
