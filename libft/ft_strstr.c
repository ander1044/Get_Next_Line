/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:18:18 by anben             #+#    #+#             */
/*   Updated: 2019/06/03 14:51:30 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *st1;
	char *st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	if (st1 == NULL && st2 == NULL)
		return (NULL);
	return (ft_strnstr(st1, st2, ft_strlen(st1)));
}
