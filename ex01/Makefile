NAME = PhoneBook
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -MD
RM = @rm -rf
CC = @c++
DIR = @mkdir -p
PRINT = @echo
FILES = Utils/StringUtils				\
		Models/ContactModel				\
		Models/PhoneBookModel			\
		Controllers/PhoneBookController	\
		Views/PhoneBookView				\
		main							\

OBJS = $(addsuffix .o, $(addprefix .Objects/, $(FILES)))
DPDS = $(addsuffix .d, $(addprefix .Objects/, $(FILES)))

$(NAME): $(OBJS)
	$(PRINT) "Making $(NAME)..."
	$(CC) $(OBJS) -o $(NAME)
	$(PRINT) "$(NAME) done."

.Objects/%.o: ./%.cpp Makefile
	$(DIR) .Objects/Models .Objects/Controllers .Objects/Views .Objects/Utils
	$(PRINT) "Compiling $<$(_END)..."
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Objects cleaned."

fclean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Deleting Objects directory..."
	$(RM) .Objects
	$(PRINT) "Deleting $(NAME)..."
	$(RM) $(NAME)
	$(PRINT) "Objects cleaned."
	$(PRINT) "Objects directory deleted."
	$(PRINT) "$(NAME) deleted."

re: fclean all

.PHONY: all clean fclean re

-include $(OBJS:.o=.d)