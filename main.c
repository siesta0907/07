#1916513
#include <stdio.h>
int main(void)
{
	int i = 10;
	printf("�Լ� ȣ���� i=%d\n", i);
	i = inc(i);
	printf("�Լ� ȣ���� i=%d\n", i);
	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}
