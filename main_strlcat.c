#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[100] = "Hello ";
	char	src[6] = "World";

	printf("%lu\n", strlcat(dst, src, 100));
	printf("%s\n", dst);

	char	dst2[100] = "Hello ";
	char	src2[6] = "World";

	printf("%lu\n", ft_strlcat(dst2, src2, 100));
	printf("%s\n", dst2);

	char	dst3[100] = "Hello ";
	char	src3[6] = "World";

	printf("%lu\n", strlcat(dst3, src3, 5));
	printf("%s\n", dst3);

	char	dst4[100] = "Hello ";
	char	src4[6] = "World";

	printf("%lu\n", ft_strlcat(dst4, src4, 5));
	printf("%s\n", dst4);
}
