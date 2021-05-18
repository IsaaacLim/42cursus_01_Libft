#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[6] = "Hello";
	char	dst[6] = "World";

	char	src2[6] = "Hello";
	char	dst2[6] = "World";

	char	src3[6] = "Hello";
	char	dst3[6] = "World";

	char	src4[6] = "Hello";
	char	dst4[6] = "World";

	char	src5[10] = "abcdefghi";

	char	src6[10] = "abcdefghi";

	char	src7[10] = "abcdefghi";


	printf("%s\n", memmove(dst, src, 6));
	printf("%s\n", ft_memmove(dst2, src2, 6));

	printf("%s\n", memmove(dst3, src3, 2));
	printf("%s\n", ft_memmove(dst4, src4, 2));

	printf("Memmove: %s\n", memmove(&src5[1], src5, 3));
	printf("ft_memmove: %s\n", ft_memmove(&src6[1], src6, 3));
	printf("Memcpy: %s\n", memcpy(&src7[1], src7, 3));
}
