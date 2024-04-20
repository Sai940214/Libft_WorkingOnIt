/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:11:23 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 15:44:37 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return 1;
	return 0;
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	if(ft_isdigit(i))
		printf("%d is digit \n", i);
	else
		printf("%d is not digit \n", i);

	if(isdigit(i))
		printf("%d is digit \n", i);
	else
		printf("%d is not digit \n", i);
	return 0;
}
