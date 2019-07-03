/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:59:48 by anben             #+#    #+#             */
/*   Updated: 2019/07/03 13:03:22 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlen(const char *str);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_jointostr(char *str, char *buff);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(const char *str, char c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				ft_conmcase(char ch);
char				ft_conmcasei(unsigned int n, char ch);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putstr(const char *str);
void				ft_putnbr(int nbr);
void				ft_putchar(char c);
void				ft_concase(char *ch);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				ft_concasei(unsigned int n, char *ch);
void				ft_bzero(void *s, size_t n);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
#endif
