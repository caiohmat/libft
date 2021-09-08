#include "libft.h"

void	*ft_memset(void	*dest, int	c, size_t	len)
{
	unsigned char	*p;	
	size_t			counter;

	p = dest;
	counter = 0;
	while (counter < len)
	{
		p[counter] = c;
		counter++;
	}
	return (dest);
}
