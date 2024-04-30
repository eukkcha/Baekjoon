#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long N, M;
    scanf("%lld %lld", &N, &M);

    printf("%lld\n", llabs(N - M));

    return 0;
}