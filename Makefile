# **************************************************************************** #
#                              Makefile - Push_Swap                           #
# **************************************************************************** #

# Variables
NAME := push_swap
CC := cc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := -Iincludes -Ilibft -Ift_printf/includes
LIBFT_DIR := libft
LIBFT := $(LIBFT_DIR)/libft.a
FT_PRINTF_DIR := ft_printf
FT_PRINTF := $(FT_PRINTF_DIR)/libftprintf.a

SRC_DIR := src
OBJ_DIR := obj

SRC_FILES := \
    main.c \
    parser.c \
    error.c \
    stack.c \
    sort_stack.c \
    find_partial_median.c \
    find_max.c \
    bring_to_top.c \
    quicksort.c \
    extract_values.c \
    operations/sa.c \
    operations/sb.c \
    operations/ss.c \
    operations/pa.c \
    operations/pb.c \
    operations/ra.c \
    operations/rb.c \
    operations/rr.c \
    operations/rra.c \
    operations/rrb.c \
    operations/rrr.c

SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

# Rules
all: $(NAME)

$(LIBFT):
	@echo "Compiling libft..."
	@$(MAKE) -C $(LIBFT_DIR) bonus

$(FT_PRINTF):
	@echo "Compiling ft_printf..."
	@$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJ)
	@echo "Creating $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "Done."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling $<..."
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	@echo "Cleaning executable and libraries..."
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

