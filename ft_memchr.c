#include "libft.h"

void	*ft_memchr(const void	*b, int	c, size_t	len)
{
	size_t			counter;
	unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)b;
	while (counter < len)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		counter++;
	}
	return (NULL);
}
