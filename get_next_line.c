/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:35:35 by anben             #+#    #+#             */
/*   Updated: 2019/07/02 14:56:28 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char *str[1024];
	char buff[BUFF_SIZE + 1];
	int res;

	res = 0;
	if (!(line) || read(fd, buff, 0) == -1 || fd < 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	if (!(ft_strchr(str[fd], '\n')))
	{
		while ((res = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[ret] = '\0';
			str[fd] = .....
				if (ft_strchr(str[fd], '\n'))
					break ;
		}
	}
	if (res == 0 && !(ft_strlen(str[fd]))
			return (0);
			str[fd] =
	return (1);
}
