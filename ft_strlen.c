/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:28:02 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:28:04 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    while (s[i] != '\0')
        i++;
    return  (i);
}

#include <stdio.h>
int main()
{
    char* str = "meowmeow";
    int i = ft_strlen(str);
    int j = strlen(str);

    printf("%d \n",i);
    printf("%d \n",j);
}