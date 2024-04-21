/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:29:05 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:29:07 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *     ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;
    int    i;

    i = 0;
    ptr = b;
    while (i < len)
    {
        ptr[i] = c;
        i++;
    }
    ptr[len] = '\0';
    return b;
         
}

#include <stdio.h>
int main()
{
    char str[5] = "Hello";
    
    ft_memset(str,'S',sizeof(str));
    printf("%s\n",str);
    
    return 0;
}
