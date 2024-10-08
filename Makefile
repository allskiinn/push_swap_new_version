CLEAR	= 	clear
RESET	:= \033[0m
GREEN	=	\e[32m

SRCS	=	./srcs/main.c \
			./srcs/ft_utils.c \
			./srcs/ft_utils2.c \
			./srcs/ft_utils3.c \
			./srcs/ft_checks.c \
			./srcs/ft_checks2.c \
			./srcs/ft_algorithms1.c \
			./srcs/ft_algorithms2.c \
			./srcs/ft_algorithms3.c \
			./srcs/ft_swap.c \
			./srcs/ft_rotate.c \
			./srcs/ft_push.c

OBJSDIR = 	objects
OBJS	= 	$(addprefix $(OBJSDIR)/,$(SRCS:.c=.o))

NAME	= 	push_swap

CC		= 	gcc -g
RM		= 	rm -rf

CFLAGS 	= 	-Wall -Wextra -Werror -g

all:		${NAME}

${NAME}:	${OBJS}
			@make -C libft
			@make -C printf
			${CC} ${CFLAGS} $^ -Llibft -lft -Lprintf -lftprintf -o ${NAME}
			$(CLEAR)
			@echo "Compilando a biblioteca libft"
			@echo "Compilando a biblioteca printf"
			@echo "$(GREEN)Projecto compilado com sucesso...$(RESET)"

$(OBJSDIR)/%.o: %.c
			mkdir -p $(@D)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			make clean -C libft
			make clean -C printf
			${RM} ${OBJSDIR}
			$(CLEAR)
			@echo "$(GREEN)objectos removidos com sucesso$(RESET)"

fclean:		clean
			${RM} ${NAME}
			$(CLEAR)
			@echo "$(GREEN)Tudo removido com sucesso...$(RESET)"

re:			fclean all
			$(CLEAR)
			@echo "$(GREEN)Projecto recompilado com sucesso...$(RESET)"

.PHONY:		libft printf

.SILENT: