#include <stdint.h>
#include <stdio.h>

static int
hamming_weight(uint32_t n)
{
	int i;
	int weight;

	weight = 0;

	for (i = 0; i < 32; i++) {
		weight += (n >> i) & 1;
	}

	return weight;
}

int
main(void)
{
	printf("hamming_weight(%d) -> %d\n", 1, hamming_weight(1));
	printf("hamming_weight(%d) -> %d\n", 2, hamming_weight(2));
	printf("hamming_weight(%d) -> %d\n", 3, hamming_weight(3));
	printf("hamming_weight(%d) -> %d\n", 4, hamming_weight(4));
	printf("hamming_weight(%d) -> %d\n", 5, hamming_weight(5));
	printf("hamming_weight(%d) -> %d\n", 6, hamming_weight(6));
	return 0;
}
