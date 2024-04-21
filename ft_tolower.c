/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:55:36 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/21 17:55:38 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 int    ft_tolower(int c)
 {
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
 }

#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        str[i] = ft_tolower(str[i]);
        i++;
    }

    printf("Uppercase version: %s \n", str);
    return 0;
}
