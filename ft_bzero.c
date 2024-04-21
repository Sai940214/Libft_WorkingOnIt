/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:20:43 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:20:48 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include<stdio.h>
int main()
{
    char str[] = "Hello";
    ft_bzero(str, 5);
    char str2[] = "Hello";
    bzero(str2, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", str[i]); 
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", str2[i]); 
    }
    printf("\n");

    return 0;
}