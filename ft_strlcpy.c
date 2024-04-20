/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:22:24 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 16:47:10 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include “libft.h”

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j]='\0';
		return i + j;
}

#include <stdio.h>
#include <string.h>


int main() {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t dstsize = sizeof(dest);


    size_t result1 = ft_strlcpy(dest, src, dstsize);
    printf(" %s\n", dest);
    
    return 0;
}

