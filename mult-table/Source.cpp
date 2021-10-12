#include <stdio.h>

int main() {
	
	for (int a = 2; a < 18; a++) {
		for (int b = 2; b < 6; b++) {
			printf("%d * %d = %d\t", (a < 10 ? b : b + 4), (a < 10 ? a : a - 8), (a < 10 ? b : b + 4) * (a < 10 ? a : a - 8));
			if (a == 9 && b == 5) printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}