/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaplha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:27:27 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/20 18:27:29 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <=122))
        return 1;
    return 0;
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	if(ft_isalpha(i))
		printf("%d is alpha \n", i);
	else
		printf("%d is not alpha \n", i);

	if(isalpha(i))
		printf("%d is alpha \n", i);
	else
		printf("%d is not alpha \n", i);
	return 0;
}