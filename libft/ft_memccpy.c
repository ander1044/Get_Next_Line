/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:54:32 by anben             #+#    #+#             */
/*   Updated: 2019/06/02 14:57:54 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dpos;
	unsigned char	*spos;

	i = 0;
	dpos = dest;
	spos = (unsigned char *)src;
	while (i < n)
	{
		dpos[i] = spos[i];
		if (spos[i] == (unsigned char)c)
			return (dpos + i + 1);
		i++;
	}
	return (NULL);
}
