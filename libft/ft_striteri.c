/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:59:24 by event             #+#    #+#             */
/*   Updated: 2019/06/12 11:21:49 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (str[i])
	{
		(f)(i, (&str[i]));
		i++;
	}
}
