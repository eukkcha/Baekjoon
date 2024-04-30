#include <stdio.h>

int main() 
{
	int A, B, C, result;
	scanf("%d %d %d", &A, &B, &C);

	if (A == B && B == C && C == A)
		result = 10000 + A * 1000;
	else if (A == B)
		result = 1000 + A * 100;
	else if (B == C)
		result = 1000 + B * 100;
	else if (C == A)
		result = 1000 + C * 100;
	else
	{
		if (A > B && A > C)
			result = A * 100;
		else if (B > A && B > C)
			result = B * 100;
		else if (C > A && C > B)
			result = C * 100;
	}

	printf("%d\n", result);

	return 0;
}