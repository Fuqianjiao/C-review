#include <stdio.h>
int main()
{
    int arr[9];
    int i, a; //为插入的数字
    for (i = 0; i < 9; i++)
    { //遍历9个元素
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    int count = 0; //计数器
    for (i = 0; i < 9; i++)
    {
        if (arr[i] < a)
        {
            printf("%d\n", arr[i]);
            count++; //记住停下来时候的下标
        }
    }
    printf("%d\n", a);
    for (i = count; i < 9; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
