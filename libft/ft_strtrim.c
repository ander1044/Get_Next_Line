/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:51:07 by anben             #+#    #+#             */
/*   Updated: 2019/06/21 16:09:26 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		firstchar(char *s, char *spaces)
{
	int count;
	int tmp;
	int i;

	count = 0;
	while (*s)
	{
		tmp = count;
		i = 0;
		while (spaces[i])
			if (spaces[i++] == *s)
				count++;
		if (count == tmp)
			return (count);
		s++;
	}
	return (count);
}

static int		lastchar(char *s, char *spaces)
{
	int count;
	int len;
	int i;
	int tmp;

	count = 0;
	len = ft_strlen(s) - 1;
	while (s[len])
	{
		tmp = count;
		i = 0;
		while (spaces[i])
			if (spaces[i++] == s[len])
				count++;
		if (count == tmp)
			return (count);
		len--;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	char	*newstr;
	int		len;
	int		start;
	int		spcount;
	char	*str;

	str = (char *)s;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	spcount = firstchar(str, " \n\t");
	start = spcount;
	if (len > spcount)
		spcount += lastchar(str, " \n\t");
	len -= spcount;
	if (!(newstr = ft_memalloc((size_t)len + 1)))
		return (NULL);
	newstr = ft_strncpy(newstr, (char*)str + start, len);
	newstr[len] = '\0';
	return (newstr);
}
