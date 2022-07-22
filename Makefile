NAME = "liftprintf.a"

SRCS = ft_printf.c \
			utils/ft_print_char.c \
			utils/ft_print_str.c \
			utils/ft_print_int.c \
			utils/ft_print_adrr.c \
			utils/ft_print_hex.c \
			utils/ft_print_dec.c \
			utils/ft_print_unknown.c \
			utils/ft_print_unsigned.c \
			utils/ft_print_hex_upper.c \
			utils/ft_print_percent.c \
			tests/main.c \
			
CC = gcc
FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)