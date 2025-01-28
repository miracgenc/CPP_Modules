SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= harl
FLAGS	= -Wall -Wextra -Werror -g -std=c++98 

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	c++ $(FLAGS) -c $(SRCS)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re