/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:47:43 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/21 17:47:45 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 int    ft_toupper(int c)
 {
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
 }

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        str[i] = ft_toupper(str[i]);
        i++;
    }

    printf("Uppercase version: %s \n", str);
    return 0;
}