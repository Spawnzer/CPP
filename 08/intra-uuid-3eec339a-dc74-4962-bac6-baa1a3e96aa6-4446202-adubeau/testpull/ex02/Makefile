NAME= MutantStack

CXX= c++

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
