NAME    := zombie
CC      := c++
CFLAGS  := -Wall -Wextra -Werror -std=c++98

SRCDIR := .
OBJDIR := build
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp Zombie.h Makefile | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re





## Why we use  | $(OBJDIR)
##
## In this rule:
##   $(OBJDIR)/%.o: $(SRCDIR)/%.cpp utils.h | $(OBJDIR)
##
## - Files before the "|" (like .cpp and .h) are *normal prerequisites*:
##   If they change → rebuild the .o file.
##
## - Items after the "|" are *order-only prerequisites*:
##   Make sure they exist before the build, but do NOT trigger rebuilds
##   if only their timestamp changes.
##
## In our case:
## - $(OBJDIR) must exist before putting object files inside it.
## - But we don’t want "touch obj/" or recreating the folder to force
##   all object files to rebuild.
##
## So:  | $(OBJDIR) ensures the directory exists
##       without causing unnecessary recompilation.
