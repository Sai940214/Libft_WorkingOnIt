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

#include "libft.h"
void *	ft_memmove(void *dst, const void *src, size_t len)
{
	char*		s1;
	const char*	s2;
	int			i;

    s1 = dst;
	s2 = src;
    if(s1 == s2 || len == 0)
        return dst;

	if(s1 < s2){
		i = 0;
		while(i < len){
			s1[i]=s2[i];
			i++;
		}
	}

	else if(s1 > s2){
		i = len;
		while(i > 0){
			s1[i-1]=s2[i-1];
			i--;
		}
	}
	return dst;
}

#include <stdio.h>
#include <string.h>

int main() {
    char example1[20] = "Hello, World!";
    char example2[20] = "Test String Data";
    
    printf("Original: '%s'\n", example1);
    ft_memmove(example1 + 6, example1, 5);
    printf("Memmoved: '%s'\n", example1);  // 预期输出: "Hello, Hello!"
    
    printf("Original: '%s'\n", example2);
    ft_memmove(example2, example2 + 5, 10);
    printf("Memmoved: '%s'\n", example2);  // 预期输出: "String Datang Data"
    
    return 0;
}

