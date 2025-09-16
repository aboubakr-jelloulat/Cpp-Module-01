NAME := violence

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR := src

SRCS := $(wildcard $(SRC_DIR)/*.cpp)

OBJDIR := build
OBJFILES := $(addprefix $(OBJDIR)/,$(notdir $(SRCS:.cpp=.o)))

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


DEPENDS := $(patsubst %.o,%.d,$(OBJFILES))

-include $(DEPENDS)

$(OBJDIR)/%.o : $(SRC_DIR)/%.cpp Makefile
	@mkdir -p $(@D)
	@$(call tidy_compilation,$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -MMD -MP -c $< -o $@)



define tidy_compilation
	@printf "Compiling %s...\n" "$<"
	@$(1)
	@printf "\e[A\e[K"
endef

  