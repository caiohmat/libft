#include "libft.h"

void	ft_striteri(char	*s, void	(*f)(unsigned int, char*))
{
	unsigned int	counter;

	if (s == NULL || f == NULL)
		return ;
	counter = 0;
	while (s[counter] != '\0')
	{
		f(counter, &s[counter]);
		counter++;
	}
}
