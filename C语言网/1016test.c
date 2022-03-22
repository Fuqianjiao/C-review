include <stdio.h>
int main()
{
    int a, b, c, i;
    for (i = 100; i < 1000; i++) {
        a = i / 100;//百位
        b = i / 10 % 10;//十位
        c = i % 10;//个位
        if(a * a * a + b * b * b + c * c * c == i)
            printf("%d", i);
    }
    printf("\n");
    return 0;
}
