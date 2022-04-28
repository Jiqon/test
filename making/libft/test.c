#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}

int main()
{
	int x;
	char c = 0;
	char *s = "Hello World!";

	printf("%d\n", ft_atoi("   ---3"));
	printf("%d\n", atoi("    ---3"));
}