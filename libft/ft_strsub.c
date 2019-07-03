/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:37:41 by anben             #+#    #+#             */
/*   Updated: 2019/06/05 11:28:32 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	*st1;

	i = 0;
	str = (char *)ft_memalloc(sizeof(char) * len + 1);
	st1 = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
	if (st1 == NULL)
		return (0);
	while (i < len)
	{
		str[i] = st1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
