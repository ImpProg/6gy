#include <stdio.h>
#include <stdlib.h>

int main() {
	int* x = (int*) malloc(sizeof(int) * 20);
	
	int i;
	for (i = 0;	i < 20; ++i) {
		x[i] = i;
	}
	
	for (i = 0;	i < 20; ++i) {
		printf("%d\n", x[i]);
	}
	
	free(x);
	
	return 0;
}