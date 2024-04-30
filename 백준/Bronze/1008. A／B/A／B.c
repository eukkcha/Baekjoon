#include <stdio.h>

int main() 
{
    int A, B;
    scanf("%d %d", &A, &B); // 두 정수 A, B 입력받기

    // 두 수의 나눗셈 결과를 double 형태로 계산
    double result = (double)A / B;

    // 결과를 소수점 아래 최소 10자리까지 출력
    printf("%0.10lf\n", result);

    return 0;
}
