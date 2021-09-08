#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	copied;
	size_t	counter;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	counter = 0;
	if ((dstsize > dstlen) && (dstsize > 0))
	{
		while (dst[counter] != '\0')
			counter++;
		copied = 0;
		while ((src != '\0') && (copied < (dstsize - dstlen - 1))
			&& (counter < dstlen + srclen + 1))
		{
			dst[counter++] = *src++;
			copied++;
		}
		dst[counter] = '\0';
		return (dstlen + srclen);
	}
	return (srclen + dstsize);
}
