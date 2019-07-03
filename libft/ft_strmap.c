/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:04:48 by anben             #+#    #+#             */
/*   Updated: 2019/06/10 14:42:06 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;
	char	*st1;

	i = 0;
	st1 = (char *)s;
	if (!s || !f)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(st1) + 1)))
		return (NULL);
	if (str == NULL && st1 == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(st1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
