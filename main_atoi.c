#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*intmax = "2147483647";
	char	*intmin = "-2147483648";
	char	*negs = "--100";
	char	*pos = "++100";
	char	*space = "   100";
	char	*spaceneg = "   -100";
	char	*spacesign = " +  -42";
	char	*zero = "0";

	printf("%s: %d\n", intmax, atoi(intmax));
	printf("%s: %d\n", intmax, ft_atoi(intmax));
	printf("%s: %d\n", intmin, atoi(intmin));
	printf("%s: %d\n", intmin, ft_atoi(intmin));
	printf("%s: %d\n", negs, atoi(negs));
	printf("%s: %d\n", negs,ft_atoi(negs));
	printf("%s: %d\n", pos, atoi(pos));
	printf("%s: %d\n", pos, ft_atoi(pos));
	printf("%s: %d\n", space, atoi(space));
	printf("%s: %d\n", space, ft_atoi(space));
	printf("%s: %d\n", spaceneg, atoi(spaceneg));
	printf("%s: %d\n", spaceneg,ft_atoi(spaceneg));
	printf("%s: %d\n", spacesign, atoi(spacesign));
	printf("%s: %d\n", spacesign, ft_atoi(spacesign));
	printf("%s: %d\n", zero, atoi(zero));
	printf("%s: %d\n", zero, ft_atoi(zero));
}
