/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:35:35 by anben             #+#    #+#             */
/*   Updated: 2019/07/02 15:59:42 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*ft_jointostr(char *str, char *buff)
{
	char *limited;

	if (!str)
		return (NULL);
	limited = ft_strjoin(str, buff);
	free(str);
	return (limited);
}

static char		*ft_searchline(char **line, char *str)
{
	int stri;

	stri = 0;
	while (str[stri] && str[stri] != '\n')
		stri++;
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	static char	*str[1024];
	char		buff[BUFF_SIZE + 1];
	int			res;

	res = 0;
	if (!(line) || read(fd, buff, 0) == -1 || fd < 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	if (!(ft_strchr(str[fd], '\n')))
	{
		while ((res = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[res] = '\0';
			str[fd] = ft_jointostr(str[fd], buff);
			if (ft_strchr(str[fd], '\n'))
				break ;
		}
	}
	if (res == 0 && !(ft_strlen(str[fd])))
		return (0);
	str[fd] = ft_searchline(line, str[fd]);
	return (1);
}
