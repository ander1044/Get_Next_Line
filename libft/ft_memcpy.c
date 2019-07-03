/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:10:17 by anben             #+#    #+#             */
/*   Updated: 2019/06/06 15:19:41 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dpos;
	const char	*spos;

	i = 0;
	dpos = dest;
	spos = src;
	while (i < n)
	{
		if (n == 0 || dpos == spos)
			return (dest);
		dpos[i] = spos[i];
		i++;
	}
	return (dest);
}
