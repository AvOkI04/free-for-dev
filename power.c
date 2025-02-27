#include <stdio.h>
int power(int a, int base) {
	int p = 1;
	for(int i = 0;i<a;i++) 
		p*=base;
	return p;
}

int main() {
	printf("%d",power(2,3));
}
