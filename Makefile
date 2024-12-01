NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

INCLUDES = include
OBJS_DIR = obj

LIBFT_SRCS = \
		src/libft/ft_isalpha.c	\
		src/libft/ft_isdigit.c \
		src/libft/ft_isalnum.c \
		src/libft/ft_isascii.c \
		src/libft/ft_isprint.c \
		src/libft/ft_strlen.c \
		src/libft/ft_memset.c \
		src/libft/ft_bzero.c \
		src/libft/ft_memcpy.c \
		src/libft/ft_memmove.c \
		src/libft/ft_strlcpy.c \
		src/libft/ft_strlcat.c \
		src/libft/ft_toupper.c \
		src/libft/ft_tolower.c \
		src/libft/ft_strchr.c \
		src/libft/ft_strrchr.c \
		src/libft/ft_strncmp.c \
		src/libft/ft_memchr.c \
		src/libft/ft_memcmp.c \
		src/libft/ft_strnstr.c \
		src/libft/ft_atoi.c \
		src/libft/ft_calloc.c \
		src/libft/ft_strdup.c \
		src/libft/ft_substr.c \
		src/libft/ft_strjoin.c \
		src/libft/ft_strtrim.c \
		src/libft/ft_split.c \
		src/libft/ft_itoa.c \
		src/libft/ft_strmapi.c \
		src/libft/ft_striteri.c \
		src/libft/ft_putchar_fd.c \
		src/libft/ft_putstr_fd.c \
		src/libft/ft_putendl_fd.c \
		src/libft/ft_putnbr_fd.c \
		src/libft/ft_lstnew.c \
		src/libft/ft_lstadd_front.c \
		src/libft/ft_lstsize.c \
		src/libft/ft_lstlast.c \
		src/libft/ft_lstadd_back.c \
		src/libft/ft_lstdelone.c \
		src/libft/ft_lstclear.c \
		src/libft/ft_lstiter.c \
		src/libft/ft_lstmap.c
GNL_SRCS = \
		src/get_next_line/get_next_line_bonus.c	\
		src/get_next_line/get_next_line_utils_bonus.c
FT_PRINTF_SRCS = \
		src/ft_printf/ft_print_cs.c \
		src/ft_printf/ft_print_d.c \
		src/ft_printf/ft_print_p.c \
		src/ft_printf/ft_print_u.c \
		src/ft_printf/ft_print_x.c \
		src/ft_printf/ft_printf.c

OBJS = $(LIBFT_SRCS:src/libft/%.c=$(OBJS_DIR)/libft/%.o) \
	  $(GNL_SRCS:src/get_next_line/%.c=$(OBJS_DIR)/get_next_line/%.o) \
	  $(FT_PRINTF_SRCS:src/ft_printf/%.c=$(OBJS_DIR)/ft_printf/%.o)

AR = ar -rcs ${NAME}
RM = rm -f
HEADERS = \
		include/ft_printf.h \
		include/get_next_line_bonus.h \
		include/libft.h

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${OBJS}

$(OBJS_DIR)/%.o: src/%.c ${HEADERS} | $(OBJS_DIR)
	${CC} ${CCFLAGS} -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)/libft
	mkdir -p $(OBJS_DIR)/get_next_line
	mkdir -p $(OBJS_DIR)/ft_printf

clean:
	${RM} -r ${OBJS_DIR}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all bonus clean fclean re