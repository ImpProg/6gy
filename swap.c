#include <stdio.h>

void swap(int* x, int* y) {
	int s = *x;
	*x = *y;
	*y = s;
}

int main() {
	int a = 2;
	int b = 3;
	
	printf("Before swap a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("After swap a: %d, b: %d\n", a, b);
	
	return 0;
}