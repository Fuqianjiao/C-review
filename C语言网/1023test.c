#include <stdio.h>
int main()
{
    int n[10] = {0};     //数组的初始化
    int i, j, min, temp; // i和j为循环两次的变量
    for (i = 0; i < 10; i++)
    { //遍历1-10的元素
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 9; i++)
    {            // i通过是也是无序数组的第一个下标
        min = i; //假设最小值是无序区的第一个数
        //寻找最小值的下标
        for (j = i; j < 10; j++)
        {
            if (n[j] < n[min])
            {
                min = j;
            }
        }
        //如果最小值不是无序数组区的第一个数组，就把最小值和无序区第一个数交换
        if (min != i)
        {
            temp = n[min];
            n[min] = n[i];
            n[i] = temp;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}
     
