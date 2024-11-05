SRCS = ft_isalpha.c\
       ft_isdigit.c\
       ft_isalnum.c\
       ft_isascii.c\
       ft_isprint.c\
       ft_strlen.c\
       ft_bzero.c\
       ft_memcpy.c\
       ft_memcmp.c\
       ft_toupper.c\
       ft_tolower.c\
       ft_atoi.c\
       ft_strdup.c\
       ft_strncmp.c\
       ft_strchr.c\
       ft_strrchr.c\
       ft_memchr.c\
       ft_putstr_fd.c\
       ft_putchar_fd.c\
       ft_putnbr_fd.c\
       ft_putendl_fd.c\
       ft_memset.c\
       ft_strlcat.c\
       ft_strnstr.c\
       ft_calloc.c\
       ft_memmove.c\
       ft_strlcpy.c\
       ft_substr.c\
       ft_strjoin.c\
       ft_strtrim.c\
       ft_split.c\
       ft_itoa.c\
       ft_strmapi.c\
       ft_striteri.c\


BSRC = ft_lstnew.c\
       ft_lstadd_front.c\


OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRC:.c=.o)

CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
AR = ar crs
NAME = libft.a

all: $(NAME)

bonus: $(NAME) $(BOBJS)
	@$(AR) $(NAME) $(BOBJS)

#exec: $(NAME)
#	@$(CC) $(FLAGS) main.c -L. -lft -o program

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@


clean:
	@$(RM) $(OBJS) $(BOBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

