/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:47:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/07 13:29:13 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*src1;

	i = 0;
	src1 = (char *)src;
	while (i < dstsize && dst[i])
		i++;
	if (dstsize == i)
		return (dstsize + ft_strlen(src1));
	j = 0;
	while (dstsize > (i + j + 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (dstsize == (i + j + 1))
	{
		while (src[j])
			j++;
	}
	return (i + j);
}
