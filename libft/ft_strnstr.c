/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:10:46 by anben             #+#    #+#             */
/*   Updated: 2019/06/04 11:43:12 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*st1;
	char	*st2;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	j = ft_strlen(st2);
	if (*st2 == '\0')
		return ((char *)s1);
	while (i < len && st1[i] != '\0')
	{
		if (j > len - i)
			return (NULL);
		if (st2[0] == st1[i] && ft_memcmp(&st1[i], st2, j) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
