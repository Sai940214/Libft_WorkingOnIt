/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:23:51 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 19:24:31 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char* s1;
    const char* s2;
    size_t  i;

    s1 = dst;
    s2 = src;
    i = 0;
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }

    return dst;
}  

#include <stdio.h>
int main() {
    char src[50] = "This is the source.";
    char dest[50];
    
    ft_memcpy(dest, src, strlen(src) + 1); 

    char src2[50] = "This is eht source.";
    char dest2[50];
    memcpy(dest2, src2, strlen(src2) + 1);  

    printf("dest = %s\n", dest); 
    printf("dest2 = %s\n", dest2); 

    return 0;
}