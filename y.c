#include <stdio.h>

int main(void) {

	int a = 42;
	int count = 0;
	int res = 0;

	while (a) {
		res |= a & 1;
		res <<= 1;
		++count;
		a >>= 1;
	}
	res >>= 1;

	while (count) {
		printf("%d", res & 1);
		res >>= 1;
		--count;
	}
	printf("\n");
	
	return 0;
}
