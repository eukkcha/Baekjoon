#include <stdio.h>

int main()
{
    int N, a[1000000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    int min = 1000000, max = -1000000;
    for (int i = 0; i < N; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }

    printf("%d %d", min, max);

    return 0;
}