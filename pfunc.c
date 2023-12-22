#include <stdio.h>

typedef int(*test)();

int func1() {
	printf("func1\n");
	return 1;
}

int func2() {
	printf("func2\n");
	return 1;
}

int func3() {
	printf("func3\n");
	return 1;
}

int main(void) {
	test p;
	p = func2;
	p();
	return 0;
}


