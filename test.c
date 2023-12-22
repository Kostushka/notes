#include <stdio.h>
#include <stdlib.h>

void reverse(char *arr, int size);

int main(void) {
	// int arr[10];
	// int size = (int) sizeof(arr) / sizeof(int);

	char nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	reverse(nums, sizeof(nums));

	int *arr;
	int size;

	printf("Введите кол-во чисел, которые будут записаны в массив:\n");
	scanf("%d", &size);

	arr = (int *) malloc(size * sizeof(int));
	if (arr == NULL) {
		perror("malloc");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		printf("Введите число:\n");
		scanf("%d", &arr[i]);
	}

	printf("Числа:\n");
	for (int i = size - 1; i >= 0; i--) {
		printf("%d\n", arr[i]);
	}

	free(arr);
	
	return 0;
}

void reverse(char *arr, int size) {

	for (int start = 0, end = size - 1; start < end; start++, end--) {
		char c = arr[start];
		arr[start] = arr[end];
		arr[end] = c;
	}
	
}
