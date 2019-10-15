#include <stdio.h>

int main() {
	int x[] = {1, 2, 3, 4, 5};
	int* p = x;
	
	printf("%d\n", *(x + 1));
	printf("%d\n", x[1]);
	
	return 0;
}