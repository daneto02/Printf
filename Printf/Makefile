# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daneto <daneto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:08:13 by daneto            #+#    #+#              #
#    Updated: 2025/05/13 10:58:03 by daneto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
COMPRESS = ar rcs
COMPILE = $(CC) $(CFLAGS) -c

SRCS =	ft_printf.c ft_auxi.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c \
		ft_putstr.c ft_putuint.c

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMPRESS) $(NAME) $(OBJS)
	@echo "Library $(NAME) Created"

%.o: %.c $(HEADER)
	$(COMPILE) $< -o $@ -I.

clean:
	@$(RM) $(OBJS)
	@echo "Cleaned Object Files"

fclean: clean
	@$(RM) $(NAME)
	@echo "All cleaned up: $(NAME)!"

re: fclean all

.PHONY: all clean fclean re