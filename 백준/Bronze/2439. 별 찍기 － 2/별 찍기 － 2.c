#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int k = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - k; j++)
			printf(" ");
		for (int j = 0; j < k; j++)
			printf("*");
		printf("\n");
		k++;
	}

	return 0;
}