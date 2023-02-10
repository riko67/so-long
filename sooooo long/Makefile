SRC 	= 	checker2map.c \ 
			checkermap.c \ 
			hook.c \
			image.c \
			main.c \
			readmap.c \
			window.c \ 
			get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c \
			ft_printf/ft_printf.c \
			ft_printf/ft_unsignedputnbr_fd.c \
			ft_printf/ft_putstr_fd.c \
			ft_printf/ft_putnbrhexamin.c \
			ft_printf/ft_putnbrhexamaj.c \
			ft_printf/ft_putnbr_fd.c \
			ft_printf/ft_putchar_fd.c \
			ft_printf/ft_putaddr.c \
			ft_printf/ft_formatfiltre.c \
		
INC	= -I /Users/$$USER/MLX42/include -I get_next_line -I ft_printf

LIB 	= /Users/$$USER/MLX42/libmlx42.a -lglfw -L /Users/$$USER/.brew/opt/glfw/lib		

OBJS 	= ${SRC:.c=.o}

NAME	= solong.a

FLAGS 	= -Wall -Werror -Wextra 

CC 	= gcc

all	: ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.c=.o}

${NAME}	: ${OBJS}
	  ${CC} ${FLAGS} ${LIB} -o ${NAME}
	  ranlib ${NAME}

clean	: 
	  rm -f ${OBJS}


fclean  : clean
	  rm -f ${NAME}

	
re	: fclean all

.PHONY: all clean fclean re
