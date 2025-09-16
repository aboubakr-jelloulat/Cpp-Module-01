NAME := violence

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR := src
INCLUDE_DIR := includes

SRCS := $(wildcard $(SRC_DIR)/*.cpp)

OBJDIR := build
OBJFILES := $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))
DEPENDS := $(OBJFILES:.o=.d)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJFILES)
	@$(CXX) $(CXXFLAGS) $(OBJFILES) -o $(NAME)
	@echo Created executable \'$(NAME)\'

clean:
	@$(RM) -rf $(OBJDIR)
	@echo Deleted \'obj/\'

fclean: clean
	@$(RM) -f $(NAME)
	@echo Deleted executable \'$(NAME)\'

re: fclean all

-include $(DEPENDS) 

$(OBJDIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(OBJDIR)
	@mkdir -p $(@D)
	@$(call tidy_compilation,$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -MMD -MP -c $< -o $@)


$(OBJDIR):
	@mkdir -p $@

define tidy_compilation
	@printf "Compiling %s...\n" "$<"
	@$(1)
	@printf "\e[A\e[K"
endef