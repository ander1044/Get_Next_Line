/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jointostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 12:56:57 by anben             #+#    #+#             */
/*   Updated: 2019/07/03 12:58:18 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_jointostr(char *str, char *buff)
{
	char *limited;

	if (!str)
		return (NULL);
	limited = ft_strjoin(str, buff);
	free(str);
	return (limited);
}
