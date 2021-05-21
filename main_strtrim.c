#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*res = ft_strtrim("abcHello Worldabc", "abc");
	char	*res2 = ft_strtrim(" \t \t \n   \n\n\n\t", " \n\t");

	printf("%s\n", res);
	printf("%s\n", res2);

	free(res);
	free(res2);
}