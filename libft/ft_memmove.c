/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:29:18 by anben             #+#    #+#             */
/*   Updated: 2019/06/07 17:02:10 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dpos;
	const char	*spos;

	dpos = dest;
	spos = src;
	if (spos == NULL && dpos == NULL)
		return (NULL);
	if (len <= 0)
		return (dest);
	if (spos < dpos)
	{
		while (len)
		{
			dpos[len - 1] = spos[len - 1];
			len--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dpos, spos, len);
		return (dest);
	}
}
