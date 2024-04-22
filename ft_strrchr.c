/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:28:54 by yizhao            #+#    #+#             */
/*   Updated: 2024/04/22 11:28:57 by yizhao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  ft_strrchr(const char *s, int c)
{
    int    i;

    i = strlen(s);
    while (i >= 0){
        if (*(s + i) == (char)c){
            return (char *)(s + i);
        }
        i--;
    }

    return NULL;
}


#include <stdio.h>

int main() {
    const char *str = "Hello, World!"; // 测试用的字符串
    int test[] = {'l', 'W', 'x', '\0'}; // 要查找的字符数组
    char *result; // 用于接收 strrchr 返回的指针

    for (int i = 0; i < 4; i++) { // 循环测试每一个字符
        result = strrchr(str, test[i]); // 使用 strrchr 查找字符
        if (result != NULL) {
            printf("'%c' found at position %ld\n", test[i], result - str + 1); // 输出字符的位置，从1开始计数
        } else {
            printf("'%c' not found\n", test[i]); // 如果字符未找到，输出未找到的信息
        }
    }

    return 0;
}
