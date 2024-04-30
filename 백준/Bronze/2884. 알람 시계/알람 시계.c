#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (M < 45) {
		M += 15;
		H -= 1;
	}
	else {
		M -= 45;
	}

	if (H < 0) {
		H = 23;
	}

	printf("%d %d\n", H, M);

	return 0;
}