.PHONY:	all re clean fclean distclean
.SUFFIX: .cpp .o

NAME :=	materia

SRCS :=	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \

INCS := AMateria.hpp \
		Character.hpp \
		Cure.hpp \
		Ice.hpp \
		ICharacter.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp \

CXX :=	c++

LD := $(CXX)

CXX_FLAGS := -glldb -Wall -Wextra -Werror -std=c++98 # -fsanitize=address -fsanitize=undefined
LD_FLAGS := -glldb -Wall -Wextra -Werror -std=c++98 # -fsanitize=address -fsanitize=undefined

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
