#include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {
	int s = *x;
	*x = *y;
	*y = s;
}

int sort(int* array, size_t size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (array[i] > array[j]) {
				swap(&array[i], &array[j]);
			}
		}
	}
}

int main() {
	int* x = (int*) malloc(sizeof(int) * 10);
	int i;
	for (i = 0; i < 10; ++i) {
		x[i] = 10 - i;
	}
	sort(x, 10);
	
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", x[i]);
	}
	
	return 0;
}