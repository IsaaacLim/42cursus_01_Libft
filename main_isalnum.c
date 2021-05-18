#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int i;

	printf("Expected:\n");
	i = 0;
	while (i <= 47)
	{
		printf("%d ", isalnum((char)i));
		i++;
	}

	printf("\n%d: %c\n", i-1, (char) i-1);
	while (i <= 122)
	{
		printf("%d ", isalnum((char)i));
		i++;
	}
	printf("\n%d: %c\n", i-1, (char) i-1);

	while (i <= 255)
	{
		printf("%d ", isalnum((char)i));
		i++;
	}
	printf("\n%d: %c\n", i-1, (char) i-1);

	printf("Result:\n");
	i = 0;
	while (i <= 47)
	{
		printf("%d ", ft_isalnum((char)i));
		i++;
	}

	printf("\n%d: %c\n", i-1, (char) i-1);
	while (i <= 122)
	{
		printf("%d ", ft_isalnum((char)i));
		i++;
	}
	printf("\n%d: %c\n", i-1, (char) i-1);

	while (i <= 255)
	{
		printf("%d ", ft_isalnum((char)i));
		i++;
	}
	printf("\n%d: %c\n", i-1, (char) i-1);
}
