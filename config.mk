CC := gcc
INCLUDES := -I./includes
CFLAGS += -Wall -Wextra -Werror $(INCLUDES)
LFLAGS += -L./ -lft
MODS := ft_charcheck\
		ft_lst\
		ft_mem\
		ft_misc\
		ft_put\
		ft_str\
		ft_math\
		ft_ftoa\
		ft_read\
		get_next_line\
		ft_printf\

NAME_COLOR := \e[1;33m
COMPILE_COLOR := \e[1;32m
DOTS_COLOR := \e[0;36m
FINISH_COLOR := \e[0;32m
CLEAR_COLOR := \e[m
DELETE_COLOR := \e[0;31m
