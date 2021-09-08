#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	len)
{
	char	*pdst;
	char	*psrc;
	size_t	counter;

	if (dst == NULL && src == NULL)
		return (dst);
	pdst = dst;
	psrc = (char *)src;
	counter = 0;
	while (counter < len)
	{
		pdst[counter] = psrc [counter];
		counter++;
	}
	return (dst);
}
