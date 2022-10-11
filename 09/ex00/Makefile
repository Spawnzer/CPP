# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 17:05:39 by adubeau           #+#    #+#              #
#    Updated: 2022/09/21 17:05:45 by adubeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Swap

CXX= clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

ODIR= objs

SRCS= main.cpp
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
