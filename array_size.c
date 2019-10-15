#include<stdio.h>

size_t get_size(int array[]) {
	return sizeof(array) / sizeof(array[0]);
}

int main() {
	int x[] = {1, 2, 3, 4, 5, 6};
	
	printf("Array size: %lu\n", get_size(x));
	
	return 0;
}