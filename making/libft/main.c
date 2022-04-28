#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

int main()
{
	char dest[] = "Hello_World_I'm_Ha";
	char src[] = "Hello_world";

	printf("%s\n", dest);
	memmove(dest, src, 11);
	printf("%s", dest);
}