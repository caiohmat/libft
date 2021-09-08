#include "libft.h"

int	ft_memcmp(const void	*b1, const void	*b2, size_t	len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			counter;

	if (len == 0)
		return (0);
	counter = 0;
	ptr1 = (unsigned char *) b1;
	ptr2 = (unsigned char *) b2;
	while ((counter < len - 1) && (*ptr1 == *ptr2))
	{
		ptr1++;
		ptr2++;
		counter++;
	}
	return ((*ptr1) - (*ptr2));
}
