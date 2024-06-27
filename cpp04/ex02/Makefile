NAME = AnimalKingdom

SRC_DIR = src
SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/AAnimal.cpp $(SRC_DIR)/Cat.cpp $(SRC_DIR)/Dog.cpp $(SRC_DIR)/WrongAnimal.cpp $(SRC_DIR)/WrongCat.cpp \
		$(SRC_DIR)/Brain.cpp

CC = @c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj
OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "*-----------------*"
	@echo "|Compilation done!|"
	@echo "*-----------------*"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@echo "*--------------*"
	@echo "|Cleaning done!|"
	@echo "*--------------*"
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:         all clean fclean re
