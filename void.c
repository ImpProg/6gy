#include <stdio.h>

int main() {
	int x = 5;
	
	void* p = &x;
	printf("%d\n", *(int*)p);
	
	return 0;
}