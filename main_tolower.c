#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Expected:\n");
	int i = 0;
	for (; i <= 64; i++)
		printf("%c ", tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 90; i++)
		printf("%c ", tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 255; i++)
		printf("%c ", tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	printf("\nResults:\n");
	for (i = 0; i <= 64; i++)
		printf("%c ", ft_tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 90; i++)
		printf("%c ", ft_tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 255; i++)
		printf("%c ", ft_tolower((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
}
