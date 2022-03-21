#include <stdio.h>
int main()
{
    int i, n, s = 1;
    long long int Sn = 0;
    scanf("%d", &n);
    if (n < 20)
    {
        for (i = 1; i <= n; i++)
        {
            s = s * i;
            Sn = Sn + s;
        }
        printf("%lld", Sn);
    }
    return 0;
}
