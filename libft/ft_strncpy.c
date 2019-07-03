/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:03:21 by anben             #+#    #+#             */
/*   Updated: 2019/06/02 14:57:06 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t			i;
	unsigned char	*dpos;
	unsigned char	*spos;

	dpos = (unsigned char *)dest;
	spos = (unsigned char *)src;
	i = 0;
	while (i < len && spos[i] != '\0')
	{
		dpos[i] = spos[i];
		i++;
	}
	while (i < len)
	{
		dpos[i] = '\0';
		i++;
	}
	return (dest);
}
