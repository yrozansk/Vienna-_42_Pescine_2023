#include<stdio.h>

int main() {
	printf("short:      %zu Bit\n", sizeof(short)*8);
	printf("int:        %zu Bit\n", sizeof(int)*8);
	printf("long:       %zu Bit\n", sizeof(long)*8);
	printf("long long:  %zu Bit\n", sizeof(long long)*8);
	printf("float:  %zu Bit\n", sizeof(float)*8);
	printf("double:  %zu Bit\n", sizeof(double)*8);
	printf("long double:  %zu Bit\n", sizeof(long double)*8);
	return 0;
}