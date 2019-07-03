/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:00:10 by anben             #+#    #+#             */
/*   Updated: 2019/06/01 14:34:17 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;
	char	*new;

	i = 0;
	ptr = (char *)s1;
	new = (char *)malloc(sizeof(char) * ft_strlen(ptr) + 1);
	if (new == NULL)
		return (NULL);
	while (ptr[i] != '\0')
	{
		new[i] = ptr[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
