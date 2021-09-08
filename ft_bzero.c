#include "libft.h"

void	ft_bzero(void	*b, size_t	len)
{
	size_t	counter;
	char	*ptr;

	if (len == 0)
		return ;
	ptr = b;
	counter = 0;
	while (counter < len)
	{
		ptr[counter] = 0;
		counter++;
	}
}
