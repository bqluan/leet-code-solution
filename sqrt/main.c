#include <stdio.h>

static int
my_sqrt(int x)
{
	int y = 1;
	int n = x;
	while (n > y) {
		n = y +  (n - y) / 2;
		y = x / n;
	}
	return n;
}

int
main(void)
{
	printf("my_sqrt(%d) -> %d\n",  1, my_sqrt( 1));
	printf("my_sqrt(%d) -> %d\n",  4, my_sqrt( 4));
	printf("my_sqrt(%d) -> %d\n",  9, my_sqrt( 9));
	printf("my_sqrt(%d) -> %d\n", 16, my_sqrt(16));
	return 0;
}
