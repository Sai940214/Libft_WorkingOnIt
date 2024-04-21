/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:27:40 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:27:42 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
         return 1;
    return 0;
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	if(ft_isascii(i))
		printf("%d is ascii \n", i);
	else
		printf("%d is not ascii \n", i);

	if(isascii(i))
		printf("%d is ascii \n", i);
	else
		printf("%d is not ascii \n", i);
	return 0;
}