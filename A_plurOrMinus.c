#include <stdio.h>

int main() {
	int testCases;
	int a;
	int b;
	int c;
	int i;
	
	scanf("%d", &testCases);
	i = 0;
	
	while (i < testCases)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if (a - b == c)
			printf("-\n");
		else if (a + b == c)
			printf("+\n");
		i++;
	}
	return (0);
}