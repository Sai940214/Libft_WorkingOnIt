/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:45:42 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 15:48:31 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <=122))
        return 1;
	return 0;
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	if(ft_isalnum(i))
		printf("%d is alnum \n", i);
	else
		printf("%d is not alnum \n", i);

	if(isalnum(i))
		printf("%d is alnum \n", i);
	else
		printf("%d is not alnum \n", i);
	return 0;
}