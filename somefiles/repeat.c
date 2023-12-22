#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define MAX 100
#define MAXLEN 100


int main(int argc, char *argv[]) {
	int f1 = open(argv[1], O_RDONLY, 0);
	int f2 = creat(argv[2], 0666);
	char buf[BUFSIZ];

	if (lseek(f1, 5, 0) >= 0) {
		int n = read(f1, buf, BUFSIZ);
		write(f2, buf, n);
	}

	return 0;
}

