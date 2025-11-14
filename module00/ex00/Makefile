NAME =	megaphone

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

CXX =	g++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

# Colors
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

all:	$(NAME)
	@echo "$(GREEN)✓ $(NAME) is ready!$(NC)"

$(NAME):	$(OBJS)
	@echo "$(BLUE)[LINKING]$(NC) $(YELLOW)$@$(NC)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)[SUCCESS]$(NC) Executable created: $(CYAN)./$(NAME)$(NC)"

%.o: %.cpp
	@echo "$(BLUE)[COMPILING]$(NC) $(YELLOW)$<$(NC)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)[CLEANING]$(NC) Object files..."
	@rm -f $(OBJS)
	@echo "$(GREEN)✓ Object files removed$(NC)"

fclean: clean
	@echo "$(RED)[FULL CLEAN]$(NC) Removing $(CYAN)$(NAME)$(NC)..."
	@rm -f $(NAME)
	@echo "$(GREEN)✓ Everything cleaned$(NC)"

re: fclean all
	@echo "$(MAGENTA)✓ Rebuild complete!$(NC)"

.PHONY: all clean fclean re