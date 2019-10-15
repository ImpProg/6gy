#include<stdio.h>

int main() {
	int x = 5;
	
	int* p = NULL;
	printf("%d\n", p);
	
	int* p2 = &x;
	printf("address: %d, value: %d\n", p2, *p2);
	*p2 = 10;
	printf("New value: %d\n", x);
	
	return 0;
}