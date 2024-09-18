CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

TARGET = DiamondTrap

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I ./includes

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all