#include <stdio.h>

int main()
{
    int hun, ten, ind, n;
    for (n = 100; n < 1000; n++)
    {
        hun = n / 100;//百位
        ten = (n - hun * 100) / 10;//十位
        ind = n % 10;//个位
        if (n == hun * hun * hun + ten * ten * ten + ind * ind * ind)
            printf("%d\n", n);
    }
    return 0;
}
