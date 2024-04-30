#include <stdio.h>

int main() 
{
	long long X;
	scanf("%lld", &X);
	int N;
	scanf("%d", &N);

	long long a;
	int b;
	for (int i = 0; i < N; i++)
	{
		scanf("%lld %d", &a, &b);
		X -= a * b;
	}

	if (X == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}