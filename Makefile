# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 21:06:26 by rhiguita          #+#    #+#              #
#    Updated: 2024/01/28 07:06:30 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

# variable CC con el nombre del compilador a utilizar
CC = gcc
AR = ar
# variable con los flags que se pasaran al compilad
CCFLAGS = -Wall -Werror -Wextra
ARFLAGS = -rcs

#el flag ´r´ los directorios que se eliminaran de forma recursiva y la ´f´ indica que no se debera requerir confirmacion.

SRCS = ft_calloc.c   ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c \
    ft_memmove.c ft_strchr.c  ft_strlcat.c ft_strlen.c  ft_strnstr.c ft_tolower.c \
    ft_atoi.c    ft_calloc.c  ft_isalpha.c ft_isdigit.c ft_memchr.c  ft_memcpy.c \
    ft_memset.c  ft_strdup.c  ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c \
	ft_substr.c  ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c 

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

# Variable OBJS para convertir los archivos con extension .c en .o
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

# creacion del ejecutable
$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonus:  $(OBJS_BONUS) 
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)

# phony ´all´ para que ´make all´ cree el ejecutable $(NAME)
all: $(NAME)

# phony target ´clean´ que no genera un fichero real sino que realiza una tarea (limpieza). el ´@´ hace  que el comando ´$(RM)´ no se escriba en la consola
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)
# phony ´re´ significa que primero ejecuta ´fclean´ y luego ´all´ para que al ejecutar ´make re´ primero elimina todo y luego lo crea de nuevo
re: fclean all

# phony targets: definicion de acciones para p. ej. eliminar, crear o testear
.PHONY: all clean fclean re
