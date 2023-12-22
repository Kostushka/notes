#include <stdio.h>
#include <limits.h>

// 00000000000000000000000000001000
// 11111111111111111111111111110111
// 								 +1
// 11111111111111111111111111111000


void print_bin(int x);

int main(void) {

	int n = INT_MIN;

	print_bin(8);
	print_bin(-8);
	print_bin(4);
	print_bin(-4);
	print_bin(15);
	print_bin(128);
	printf("INT_MIN: %d\n", n);
	print_bin(n);
	
	return 0;
}

void print_bin(int x) {
	//  100
	// 1000
	for (int i = sizeof(x) * 8 - 1; i >= 0; i--) {
		if (x & 1 << i) {
			printf("1");
		} else {
			printf("0");
		}
	}
	putchar('\n'); 	
}
