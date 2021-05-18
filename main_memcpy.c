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

	char	dst5[10] = "abcdefghi";

	char	dst6[10] = "abcdefghi";

	printf("%s\n", memcpy(dst, src, 6));
	printf("%s\n", ft_memcpy(dst2, src2, 6));

	printf("%s\n", memcpy(dst3, src3, 2));
	printf("%s\n", ft_memcpy(dst4, src4, 2));

	/*test that only memmove can handle*/
	printf("%s\n", memcpy(&dst5[1], dst5, 3));
	printf("%s\n", memmove(&dst6[1], dst6, 3));
}
