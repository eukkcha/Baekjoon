#include <stdio.h>

int main()
{
    int n, num = 0, max = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n);
        if (max < n)
        {
            max = n;
            num = i + 1;
        }
    }

    printf("%d\n%d", max, num);

    return 0;
}