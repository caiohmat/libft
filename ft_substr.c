#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*sub;
	size_t	slen;
	size_t	counter;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if ((slen - start) < len)
		len = slen - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	counter = 0;
	while (s[start] != '\0' && counter < len)
	{
		sub[counter] = s[start];
		start++;
		counter++;
	}
	sub[counter] = '\0';
	return (sub);
}
