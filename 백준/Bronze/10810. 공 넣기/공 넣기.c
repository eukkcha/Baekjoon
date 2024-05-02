#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    int a[101] = { 0 };
    int i, j, k;
    for (int q = 0; q < M; q++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int r = i; r <= j; r++)
            a[r] = k;
    }

    for (int q = 1; q < N + 1; q++)
        printf("%d ", a[q]);

    return 0;
}
