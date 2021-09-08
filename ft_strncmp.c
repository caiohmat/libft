#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	len)
{
	size_t	counter;

	if (len == 0)
		return (0);
	counter = 0;
	while ((*s1 != '\0') && (*s2 != '\0')
		&& (counter < len - 1) && (*s1 == *s2))
	{
		s1++;
		s2++;
		counter++;
	}
	return (((unsigned char) *s1) - ((unsigned char) *s2));
}
