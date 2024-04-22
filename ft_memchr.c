/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:24:40 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/22 14:24:42 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * memchr(const void *s, int c, size_t n)
{
    int i = 0;
    unsigned char *s1;

    s1 = s;
    while(i < n){
    if (s1 == c){
            return (char *)s;
        }
    }

}
