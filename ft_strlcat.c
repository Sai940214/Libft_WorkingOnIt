/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:50:30 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 15:56:47 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t    j;

    i = 0;
    j = 0;
    while(dst[i] != '\0' && i < dstsize)
        i++;
    while(src[j] != '\0' && (i + j + 1) < dstsize)
    {   dst[i + j] = src[j];
        j++;
    }
    
    dst[i + j] = '\0';
    return (i + j);
}

int main()
{
char dest[20] = "Hello, ";
const char *src = "world!";
size_t dstsize = sizeof(dest);

size_t result1 = ft_strlcat(dest, src, dstsize);
printf("%s\n", dest);
    return 0;
}
