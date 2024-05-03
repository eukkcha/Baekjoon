#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    float a[1000], M = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &a[i]);

        if (a[i] > M)
            M = a[i];
    }

    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        a[i] = a[i] * 100 / M;
        sum += a[i];
    }
    float mean = sum / N;

    printf("%f\n", mean);

    return 0;
}