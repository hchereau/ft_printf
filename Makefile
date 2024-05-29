NAME := libftprintf.a

### SRCS ######################################################################

PATH_SRCS := srcs/

SRCS += ft_printf.c

vpath %.c $(PATH_SRCS)

### OBJS ######################################################################

PATH_OBJS := objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### INCLUDES ##################################################################

INCLUDES_FT_PRINTF := includes/

INCLUDES_LIBFT :=
