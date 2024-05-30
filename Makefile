NAME := libftprintf.a

### LIBFT #####################################################################

LIBFT_FOLDER := libft/

LIBFT := $(LIBFT_FOLDER)/libft.a

### SRCS ######################################################################

PATH_SRCS := srcs/

SRCS += ft_printf.c

vpath %.c $(PATH_SRCS)

### OBJS ######################################################################

PATH_OBJS := objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### INCLUDES ##################################################################

INCLUDES_FT_PRINTF := includes/

INCLUDES_LIBFT := $(LIBFT_FOLDER)/includes/

HEADERS += $(INCLUDES_FT_PRINTF)/ft_printf.h
HEADERS += $(INCLUDES_LIBFT)/libft.h

### COMPILATION ###############################################################

CC := clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

ifeq ($(debug), true)
	CFLAGS += -fsanitize=address,undefined -g3
endif

AR = ar

### RULE ######################################################################

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		cp $(LIBFT) $(NAME)
		$(AR) rcs $(NAME) $(OBJS)

$(OBJS): $(PATH_OBJS)/%.o: %.c $(HEADERS)
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_FT_PRINTF) -I $(INCLUDES_LIBFT)

$(LIBFT):
		$(MAKE) -C $(LIBFT_FOLDER)

run: $(NAME)
	$(CC) $(CFLAGS) srcs/main.c -l ftprintf -I $(INCLUDES_FT_PRINTF) -I $(INCLUDES_LIBFT)
	./a.out

clean:
		$(RM) -R $(PATH_OBJS)
		$(MAKE) -C $(LIBFT_FOLDER) clean

fclean: clean
		$(RM) $(NAME)
		$(MAKE) -C $(LIBFT_FOLDER) fclean

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
