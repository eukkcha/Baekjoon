#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int A[100];
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);

	int v;
	scanf("%d", &v);

	int result = 0;
	for (int i = 0; i < N; i++)
		if (A[i] == v) result++;


	printf("%d\n", result);

	return 0;
}