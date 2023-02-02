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
		
LIB 	= /Users/ddelacou/MLX42/include -lglfw -L /Users/ddelacou/.brew/opt/glfw/lib		


OBJS 	= ${SRC:.c=.o}

NAME	= solong.a

FLAG 	= -Wall -Werror -Wextra 

CC 	= gcc ${FLAG}


all	: ${NAME}


${NAME}	: ${OBJS}
	  ar rc ${NAME} ${OBJS} 
	  ranlib ${NAME}

clean	: 
	  rm -f ${OBJS}


fclean  : clean
	  rm -f ${NAME}

	
re	: fclean all
