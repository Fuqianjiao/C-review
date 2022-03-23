#include <stdio.h>
int main()
{
    int sum = 1, N;
    scanf("%d", &N);
    while (--N)
        sum = (sum + 1) * 2;
    printf("%d", sum);

    return 0;
}
