# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 14:40:52 by adubeau           #+#    #+#              #
#    Updated: 2022/06/17 13:59:01 by adubeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Horde

CXX= clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

ODIR= objs

SRCS= main.cpp Zombie.cpp zombieHorde.cpp
OBJS= $(addprefix $(ODIR)/, $(SRCS:.cpp=.o))

$(ODIR)/%.o: %.cpp
			$(CXX) $(CXXFLAGS) -I. -c $< -o $@

$(NAME): $(ODIR) $(OBJS)
			$(CXX) $(OBJS) -o $(NAME)

$(ODIR):
			mkdir -p $(ODIR)

all: $(NAME)

clean:
		$(RM) $(ODIR)

fclean: clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean
