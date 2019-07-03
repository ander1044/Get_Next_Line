/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:10:36 by anben             #+#    #+#             */
/*   Updated: 2019/06/06 13:46:36 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*str1;

	str1 = (char *)s;
	str = NULL;
	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == c)
			str = str1 + i;
		i++;
	}
	if (str1[i] == c)
		return ((char*)(str1 + i));
	return ((char*)str);
}
