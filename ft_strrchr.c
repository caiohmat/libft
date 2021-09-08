#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	const char	*str;

	str = s;
	while (*s != '\0')
		s++;
	if (*s == (char)c)
		return ((char *)s);
	while (s != str)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
