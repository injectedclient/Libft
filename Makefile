# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 15:12:37 by nlambert          #+#    #+#              #
#    Updated: 2023/11/27 12:21:56 by nlambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=		ft_atoi.c			\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_itoa.c			\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\
					ft_putstr_fd.c		\
					ft_split.c			\
					ft_strchr.c			\
					ft_strdup.c			\
					ft_striteri.c		\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strmapi.c		\
					ft_strncmp.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strtrim.c		\
					ft_substr.c			\
					ft_tolower.c		\
					ft_toupper.c

BONUS_SRC	=		ft_lstadd_back.c	\
					ft_lstadd_front.c	\
					ft_lstclear.c		\
					ft_lstnew.c			\
					ft_lstdelone.c		\
					ft_lstiter.c		\
					ft_lstlast.c		\
					ft_lstsize.c		\
					ft_lstmap.c

OBJS		=		$(SRC:.c=.o)
BONUS_OBJS	=		$(BONUS_SRC:.c=.o)

NAME		=		libft.a

CC			=		cc
CFLAGS		=		-Wall -Wextra -Werror

AR			=		ar rcs
RM			=		rm -f

all			:		${NAME}

$(NAME)		:		$(OBJS)
					$(AR) $(NAME) $(OBJS)

bonus		:		$(BONUS_OBJS) $(OBJS)
					$(AR) $(NAME) $(BONUS_OBJS) $(OBJS)

clean		:
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean		:		clean
					$(RM) $(NAME)

re			:		fclean all

.PHONY		:		all bonus clean fclean re