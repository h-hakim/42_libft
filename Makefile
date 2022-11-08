# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:20:57 by hhakim            #+#    #+#              #
#    Updated: 2022/11/08 17:21:13 by hhakim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
MANDATORY_FILES =   ft_strlen \
                    ft_atoi \
                    ft_memset \
                    ft_bzero \
                    ft_memcpy \
                    ft_memmove \
                    ft_memchr \
                    ft_memcmp \
                    ft_isalpha \
                    ft_isdigit \
                    ft_isalnum \
                    ft_isascii \
                    ft_isprint \
                    ft_toupper \
                    ft_tolower \
                    ft_strchr \
                    ft_strrchr \
                    ft_strlcpy \
                    ft_strlcat \
                    ft_strnstr \
                    ft_strncmp \
                    ft_calloc \
                    ft_strdup \
                    ft_substr \
                    ft_strjoin \
                    ft_strtrim \
                    ft_itoa \
                    ft_putchar_fd \
                    ft_putstr_fd \
                    ft_putendl_fd \
                    ft_putnbr_fd \
                    ft_strmapi \
                    ft_striteri \
                    ft_split
BONUS_FILES =   ft_lstnew \
                ft_lstadd_front \
                ft_lstsize \
                ft_lstlast \
                ft_lstadd_back \
                ft_lstdelone \
                ft_lstclear \
                ft_lstiter \
                ft_lstmap
SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(MANDATORY_FILES)))
BONUSSRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES)))
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(MANDATORY_FILES)))
BONUSOBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILES)))
.c.o: $(SRCS) $(BONUSSRCS)
    $(CC) $(CFLAGS) -c -o $@ $<
$(NAME): $(OBJS) $(BONUSOBJS)
    $(AR) $@ $^
all: $(NAME)
bonus: $(NAME)
clean:
    $(RM) $(OBJS) $(BONUSOBJS)
fclean: clean
    $(RM) $(NAME)
re: clean all
.PHONY: bonus all clean fclean re

