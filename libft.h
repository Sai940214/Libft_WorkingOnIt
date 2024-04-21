#ifndef LIBFT_H
 #define LIBFT_H

#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);

void *     ft_memset(void *b, int c, size_t len);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
void    ft_bzero(void *s, size_t n);

#endif