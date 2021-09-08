#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char	*pdst;
	char	*psrc;
	size_t	counter;

	if (dst == NULL && src == NULL)
		return (dst);
	pdst = dst;
	psrc = (char *)src;
	counter = 0;
	if (pdst > psrc)
	{
		while ((int)--len >= 0)
			pdst[len] = psrc[len];
	}
	else
	{
		while (counter < len)
		{
			pdst[counter] = psrc [counter];
			counter++;
		}
	}
	return (dst);
}
