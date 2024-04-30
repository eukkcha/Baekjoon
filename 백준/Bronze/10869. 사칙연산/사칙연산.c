#include <stdio.h>

int main() 
{
    int A, B;
    scanf("%d %d", &A, &B); // 두 정수 A, B 입력받기

    printf("%d\n%d\n%d\n%d\n%d\n", A+B, A-B, A*B, A/B, A%B);

    return 0;
}