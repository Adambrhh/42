###########################################################
## ARGUMENTS

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

###########################################################
## SOURCES

SRCS = src/chunk_sorting.c \
       src/main.c \
       src/push_swap_utils.c \
       src/push_swap.c \
       src/push.c \
       src/reverse_rotate.c \
       src/rotate.c \
       src/swap.c

OBJS = $(SRCS:src/%.c=objs/%.o)

###########################################################
## RULES

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

objs/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
