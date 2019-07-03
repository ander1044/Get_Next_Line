/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:20:57 by event             #+#    #+#             */
/*   Updated: 2019/06/21 16:20:41 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*st1;
	char	*st2;
	int		i;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	if (st1 == NULL || st2 == NULL)
		return (0);
	while (st1[i] == st2[i] && st1[i] && st2[i])
	{
		i++;
	}
	if (st1[i] == st2[i])
		return (1);
	return (0);
}
