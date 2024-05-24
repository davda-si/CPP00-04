NAME = megaphone

SRC_DIR = src
SRC = $(SRC_DIR)/megaphone.cpp

CXX = @c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj
OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "*-----------------*"
	@echo "|Compilation done!|"
	@echo "*-----------------*"

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

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
