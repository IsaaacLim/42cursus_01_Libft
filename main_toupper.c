#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Expected:\n");
	int i = 0;
	for (; i <= 96; i++)
		printf("%c ", toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 122; i++)
		printf("%c ", toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 255; i++)
		printf("%c ", toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	printf("\nResults:\n");
	for (i = 0; i <= 96; i++)
		printf("%c ", ft_toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 122; i++)
		printf("%c ", ft_toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
	for (; i <= 255; i++)
		printf("%c ", ft_toupper((unsigned char)i));
	printf("\n%d: %c\n\n", i-1, (unsigned char)i-1);
}
