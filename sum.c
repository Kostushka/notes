#include <stdio.h>

int main() {

	int c;
	int sum = 0;
	while ((c = getchar()) != ' ') {
		sum += 1;
	}
	printf("sum: %d\n", sum);
	return 0;
}
