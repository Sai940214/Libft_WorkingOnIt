#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char *y;
    size_t i;

    i = 0;
    y = s;
    while(i < n)
    {
        *y = 0;
        y++;
        i++;
    }
}