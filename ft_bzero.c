/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk </var/mail/chideyuk>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:34:36 by chideyuk          #+#    #+#             */
/*   Updated: 2021/09/10 13:34:45 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
