SRCS = ft_isalpha.c\
       ft_isdigit.c\
       ft_isalnum.c\
       ft_isascii.c\
       ft_isprint.c\
       ft_strlen.c\
       ft_bzero.c\
       ft_memcpy.c\
       ft_toupper.c\
       ft_tolower.c\
       ft_atoi.c\
       ft_strdup.c\
       ft_strncmp.c\
       ft_strchr.c\
       ft_strrchr.c\
       ft_memchr.c\
       ft_memcmp.c\
       ft_memset.c\
       ft_memchr.c\
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


OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
AR = ar crs
NAME = libft.a

all: $(NAME)

#exec: $(NAME)
#	@$(CC) $(FLAGS) main.c -L. -lft -o program

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@


clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
