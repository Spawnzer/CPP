# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 19:16:25 by adubeau           #+#    #+#              #
#    Updated: 2022/06/14 19:16:45 by adubeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

CCPP= clang++

CFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

SRCS= megaphone.cpp

OBJS= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CCPP) $(CFLAGS) $(OBJS) -o $(NAME)
		
all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean%
