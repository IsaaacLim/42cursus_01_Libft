#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int i;

	printf("Expected:\n");
	i = 0;
	while (i <= 31)
	{
		printf("%d ", isprint((char)i));
		i++;
	}

	printf("\n%d: %c\n\n", i-1, (char) i-1);
	while (i <= 122)
	{
		printf("%d ", isprint((char)i));
		i++;
	}
	printf("\n%d: %c\n\n", i-1, (char) i-1);
	while (i <= 255)
	{
		printf("%d ", isprint((char)i));
		i++;
	}
	printf("\n%d: %c\n\n", i-1, (char) i-1);

	printf("Result:\n");
	i = 0;
	while (i <= 31)
	{
		printf("%d ", ft_isprint((char)i));
		i++;
	}
	printf("\n%d: %c\n\n", i-1, (char) i-1);
	while (i <= 122)
	{
		printf("%d ", ft_isprint((char)i));
		i++;
	}
	printf("\n%d: %c\n\n", i-1, (char) i-1);
	while (i <= 255)
	{
		printf("%d ", ft_isprint((char)i));
		i++;
	}
	printf("\n%d: %c\n\n", i-1, (char) i-1);
}
