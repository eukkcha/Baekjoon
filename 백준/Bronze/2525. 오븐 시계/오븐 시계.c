#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	B += C;
	if (B / 60 > 0) 
	{
		A += B / 60;
		B %= 60;
		if (A > 23)
			A -= 24;
	}

	printf("%d %d\n", A, B);

	return 0;
}