#include<stdio.h>
#include<stdlib.h>

int main() {
	int* x = (int*) calloc(11, sizeof(int));
	
	int i;
	for (i = 0; i < 11; ++i) {
		printf("%d\n", x[i]);
	}
	
	free(x);
	return 0;
}