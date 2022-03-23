#include <stdio.h>
#include <math.h>

void ReBack(double M)
{
    double back, sum = M;
    int i, N;
    scanf("%d", &N);
    back = M * pow(0.5, N);
    for (i = 1; i < N; i++)
        sum += M * pow(0.5, i - 1);
    printf("%.2lf %.2lf", back, sum);
}

int main()
{
    double M;
    scanf("%lf", &M);
    ReBack(M);

    return 0;
}
