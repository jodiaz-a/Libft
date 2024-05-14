NAME = libccft.a

SRCS = ft_isalpha.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c

INCLUDE = libft.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${INCLUDE}
	@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS} $(INCLUDE)
	@ar -rsc ${NAME} ${OBJS}

all:	${NAME}

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${OBJS}
	@${RM} ${NAME}
	@${RM}

re: fclean all

.PHONY: all clean fclean re