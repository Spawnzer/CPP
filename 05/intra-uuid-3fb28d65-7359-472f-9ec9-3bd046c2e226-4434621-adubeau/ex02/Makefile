# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 14:40:52 by adubeau           #+#    #+#              #
#    Updated: 2022/07/06 17:31:22 by adubeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Bureaucrat

CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

ODIR= objs

SRCS= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
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
