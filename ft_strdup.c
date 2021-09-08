#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*copy;
	size_t	lenght;

	lenght = ft_strlen(str) + 1;
	copy = malloc (lenght);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, str, lenght);
	return (copy);
}
