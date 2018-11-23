#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x1, x2, x3, x4, x5;
	char a;
	printf("AAAABBBBCCCCDDDD%126c%hhn", 'a', &a);
	printf("a = %d\n", a);
}
