/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:20:21 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:20:23 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	if(ft_isprint(i))
		printf("%d can print \n", i);
	else
		printf("%d cant print \n", i);

	if(isprint(i))
		printf("%d can print \n", i);
	else
		printf("%d cant print \n", i);
	return 0;
}