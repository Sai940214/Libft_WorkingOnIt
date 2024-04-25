# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yizhao <yizhao@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 18:28:29 by yizhao            #+#    #+#              #
#    Updated: 2024/04/20 18:28:32 by yizhao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
# RM is define variable, $(RM) is using variable. It will simplify writing in Makefile and If you decide to change the delete command (e.g. from rm -f to a safer delete command or a command for another operating system), you can simply change the variable definitions without having to search and replace multiple locations in the entire Makefile.
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c \
	  ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_callo.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c
# $(variable:pattern=replacement)
OBJS	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# -c $< means 1st prerequisite(which is .c) -o $@ means 2nd prerequisite(which is .o)
# 这里，$< 将会展开成与目标（%.o）对应的 .c 文件名。这允许 Makefile 中的单条规则自动匹配并处理多个文件依赖关系。

all	: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# create static libraries, which are collections of object files that can be linked into programs during the compilation process.

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
	
