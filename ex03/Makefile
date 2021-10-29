.PHONY:	all re clean fclean distclean
.SUFFIX: .cpp .o

NAME :=	animalia

SRCS :=	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \

INCS := AMateria.hpp \
		Character.hpp \
		Cure.hpp \
		Ice.hpp \
		ICharacter.hpp \

CXX :=	c++

LD := $(CXX)

CXX_FLAGS := -g3 -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=undefined
LD_FLAGS := -g3 -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=undefined

OBJS :=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(LD) $(LD_FLAGS) -o $@ $(OBJS)

%.o: %.cpp	$(INCS)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

distclean:	fclean

re: distclean all
