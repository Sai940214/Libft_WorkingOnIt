/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:09:05 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/21 16:59:26 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*什么dst<src的操作实在tmd看不懂*/
#include "libft.h"
void *	ft_memmove(void *dst, const void *src, size_t len)
{
	char*		s1;
	const char*	s2;
	size_t		i;

	i = 0;
    s1 = dst;
	s2 = src;
    if(s1 == s2 || len == 0)
        return dst;

	while(i < len)
	{
		s1[i]=s2[i];
		i++;
	}

	return dst;
}

#include <stdio.h>
int	main()
{
	char str[] = "abcde";
	char dst[] = "ABCDEFGH";
    ft_memmove(dst, str, 5); 

	char str2[] = "abcdeghjk";
	char dst2[] = "ABCDEFGH";
    memmove(dst2, str2, 10);  

    printf("dest = %s\n", dst); 
    printf("dest2 = %s\n", dst2); 

    return 0;
}
