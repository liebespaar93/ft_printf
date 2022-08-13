# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyoulee <kyoulee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 08:16:11 by kyoulee           #+#    #+#              #
#    Updated: 2022/08/14 01:35:41 by kyoulee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CPPFLAGS = -Wall -Werror -Wextra
INCLUDE = -I include/
SRC_DIR = ./src
SRC_PRINTF_DIR = ./src_printf
SRC_PRINTF_PERCENT_DIR = ./src_printf_percent
SRC_PRINTF_PERCENT_CONVERSION_DIR = ./src_printf_percent_conversion
OBJ_DIR = ./obj
OBJ_DIR_CLEAN = ./obj

SRC = ft_printf.c
SRCS_C =	ft_dtoa.c \
			ft_etoa.c \
			ft_itoa.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_str_diff.c \
			ft_str_upper.c \
			ft_strchr_index.c \
			ft_strchr_num.c \
			ft_strcpy.c \
			ft_strjoin.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmcpy.c \
			ft_strncmp.c \
			ft_va_arg_index.c

SRCS_PRINTF_C =	src/ft_printf_percent.c

SRCS_PRINTF_PERCENT_C =	src/ft_printf_asterisk.c \
						src/ft_printf_conversion.c \
						src/ft_printf_flag.c \
						src/ft_printf_length.c \
						src/ft_printf_num_type.c \
						src/ft_printf_precision.c \
						src/ft_printf_width.c

SRCS_PRINTF_PERCENT_CONVERSION_C =	src/ft_printf_a_trans.c \
									src/ft_printf_cs.c \
									src/ft_printf_dioux.c \
									src/ft_printf_fega.c \
									src/ft_printf_n.c \
									src/ft_printf_p.c \
									src/ft_printf_syntax_error.c \
									src/ft_printf_syntaxing.c

SRCS = $(notdir $(SRCS_C))
SRCS_PRINTF = $(notdir $(SRCS_PRINTF_C))
SRCS_PRINTF_PERCENT = $(notdir $(SRCS_PRINTF_PERCENT_C))
SRCS_PRINTF_PERCENT_CONVERSION = $(notdir $(SRCS_PRINTF_PERCENT_CONVERSION_C))

OBJS = $(SRC:.c=.o) $(SRCS:.c=.o) $(SRCS_PRINTF:.c=.o) $(SRCS_PRINTF_PERCENT:.c=.o) $(SRCS_PRINTF_PERCENT_CONVERSION:.c=.o)

OBJECTS = $(patsubst %.o, $(OBJ_DIR)/%.o, $(OBJS))

all: $(NAME)

bonus: $(NAME)

$(OBJ_DIR) :
	mkdir obj

$(NAME) : $(OBJ_DIR) $(OBJECTS) 
	ar src $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o : %.c
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_PRINTF_DIR)/%.c
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_PRINTF_PERCENT_DIR)/%.c
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_PRINTF_PERCENT_CONVERSION_DIR)/%.c
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET) : $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

OBJS_CLEAN = $(OBJECTS)

clean : 
	rm -f $(OBJS_CLEAN) 

fclean : OBJS_CLEAN+=$(NAME)
fclean : clean

re : fclean all

.PHONY: all clean fclean re bonus
