/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:00:58 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/21 18:01:17 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0'){
        if (*s == c){
            return (char *)s;
        }
        s++;
    }
    if (c == '\0'){
        return (char *)s;
    }
    return NULL;
}

#include <stdio.h> 

int main() {
    const char *str = "Hello, World, a!"; 
    int Test[] = {'H', '!', 'x', '\0'}; 
    char *result;

    for (int i = 0; i < 5; i++) { 
        result = ft_strchr(str, Test[i]); 
        if (result != NULL) {
            printf("'%c' found at %ld \n",
                   Test[i], result - str, str); 
        } else {
            printf("'%c' not found \n",
                   Test[i], str);
        }
    }

    for (int i = 0; i < 5; i++) { 
        result = strchr(str, Test[i]); 
        if (result != NULL) {
            printf("'%c' found at %ld \n",
                   Test[i], result - str, str); 
        } else {
            printf("'%c' not found \n",
                   Test[i], str);
        }
    }
    return 0;
}


