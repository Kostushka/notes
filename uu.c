#include <stdio.h>
#include <stdlib.h>

struct String {
	char *str;
	int size;
};

int get_line(struct String *);

int main(void) {
	struct String line;
	
	line.size = 10;
	line.str = (char *) malloc(line.size * sizeof(char));
	if (line.str == NULL) {
		perror("malloc");
		return 1;
	}
	
	while (get_line(&line) != EOF) {
		printf("%s\n", line.str);
	}
	free(line.str);
	return 0;
}

int get_line(struct String *line) {
	int i, c;
	i = c = 0;
	
	while ((c = getchar()) != EOF && c != '\n') {
		if (i == line->size) {
			line->size *= 2;
			line->str = (char *) realloc(line->str, sizeof(char) * line->size);
			if (line->str == NULL) {
				perror("realloc");
				return EOF;
			}
		}
		line->str[i++] = c;
	}

	line->str[i] = '\0';

	return c;
}
