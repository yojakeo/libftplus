/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 18:48:11 by japarbs           #+#    #+#             */
/*   Updated: 2019/11/21 21:08:40 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "get_next_line.h"
# include "ft_ftoa.h"
# include "ft_printf.h"

/*
**	Macros
*/
# define IF_RET(in, re) if (in) return (re);
# define ERROR(msg, r) {ft_putendl(msg); return(r);} 
/*
**	Structs & Lists
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
/*
**	Print Functions
*/
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char *str);
void				ft_putstr_fd(char const *s, int fd);
/*
**	Read Functions
*/
char				**ft_readfd(int fd);
/*
**	List Functions
*/
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

void				ft_lstpush(t_list **head, t_list *new);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

/*
**	Char Check / Char Functions
*/
int					ft_isspace(int c);
int					ft_isotherspace(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
/*
**	Memory Functions
*/
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
/*
**	Int Functons
*/
int					ft_atoi(const char *str);
char				*ft_itoa(long long n);
char				*ft_itoa_base(unsigned long long nbr, int base);
size_t				ft_intlen(long long n);
size_t				ft_intlen_base(unsigned long long n, int base);
/*
**	Math functions
*/
long				ft_pow(int a, int b);
/*
**	String Functions: Traversing / Indexing
*/
size_t				ft_strlen(const char *str);
size_t				ft_strdlen(char const *str, char c);
size_t				ft_strsdlen(char const *str, char c);

char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);

/*
**	String Functions: Modification / Allocation
*/
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

char				*ft_strcpy(const char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_strdel(char **as);
void				ft_strclr(char *s);

char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strnew(size_t size);
char				*ft_strdup(const char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);

int					ft_tolower(int c);
int					ft_toupper(int c);

void				ft_strtoupper(char *str);
void				ft_strtolower(char *str);
/*
** Extra Functions
*/
int					ft_findsubstrs(char const *str, char c);
char				*ft_strcut(char const *str, size_t start, size_t end);

#endif
