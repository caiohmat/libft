#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	srcsize;

	srcsize = 0;
	if (dstsize > 0)
	{
		while ((*src != '\0') && (srcsize < (dstsize - 1)))
		{
			*dst++ = *src++;
			srcsize++;
		}
		*dst = '\0';
	}
	while (*src != '\0')
	{
		srcsize++;
		src++;
	}
	return (srcsize);
}
