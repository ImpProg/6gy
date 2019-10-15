#include<stdio.h>
#include<stdlib.h>

int main() {
	int* x = (int*) malloc(sizeof(int) * 5);
	int i;
	for (i = 0; i < 5; ++i) {
		x[i] = i;
	}
	
	size_t size;
	printf("Number of extra elements: ");
	scanf("%lu", &size);

	realloc(x, size * sizeof(int));
	for (i = 0; i < 5; ++i) {
		printf("%d: %d\n",(x + i), x[i]);
	}
	
	free(x);
	return 0;
}