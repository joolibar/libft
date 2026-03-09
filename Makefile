# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 18:35:49 by joolibar          #+#    #+#              #
#    Updated: 2026/03/09 16:54:52 by joolibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                   CONFIG                                     #
################################################################################

NAME       		= libft.a
NAME_BONUS 		= libft_bonus.a

INC_DIR     	= inc
SRC_DIR     	= src
SRC_BONUS_DIR 	= src_bonus
OBJ_DIR     	= obj
OBJ_BONUS_DIR 	= obj_bonus

################################################################################
#                                   SOURCES                                    #
################################################################################
SRC_FILES = \
	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
	ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr \
	ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr \
	ft_tolower ft_toupper \
	ft_itoa ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd \
	ft_split ft_striteri ft_strjoin ft_strmapi ft_strtrim ft_substr

SRC_BONUS_FILES = \
	ft_lstadd_back_bonus ft_lstadd_front_bonus ft_lstclear_bonus \
	ft_lstdelone_bonus ft_lstiter_bonus ft_lstlast_bonus \
	ft_lstmap_bonus ft_lstnew_bonus ft_lstsize_bonus

SRCS        = $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC_FILES)))
SRCS_BONUS  = $(addprefix $(SRC_BONUS_DIR)/, $(addsuffix .c, $(SRC_BONUS_FILES)))

OBJS        = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJS_BONUS  = $(SRCS_BONUS:$(SRC_BONUS_DIR)/%.c=$(OBJ_BONUS_DIR)/%.o)

################################################################################
#                                 COMPILATION                                  #
################################################################################
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
INCLUDES    = -I$(INC_DIR)
RM          = rm -rf
MKD         = mkdir -p
AR          = ar -rcs

################################################################################
#                                   COLORS                                     #
################################################################################

DEF_COLOR   = \033[0m
GRAY        = \033[90m
WHITE       = \033[97m
CYAN        = \033[96m
BLUE        = \033[94m
GREEN       = \033[92m
PURPLE      = \033[95m
PINK        = \033[1;35m
ORANGE      = \033[38;5;208m
RED         = \033[1;31m
YELLOW      = \033[1;33m

################################################################################
#                                   BANNERS                                    #
################################################################################
define BANNER
$(CYAN)
╭─────────────────────────────────────────╮
│                                         │
│    ██╗     ██╗██████╗ ███████╗████████╗ │
│    ██║     ██║██╔══██╗██╔════╝╚══██╔══╝ │
│    ██║     ██║██████╔╝█████╗     ██║    │
│    ██║     ██║██╔══██╗██╔══╝     ██║    │
│    ███████╗██║██████╔╝██║        ██║    │
│    ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝    │
│                                         │
├─────────────────────────────────────────┤
│      $(WHITE)Standard C Library Functions$(CYAN)       │
│   $(GRAY)made by joolibar • 42 School • 2024$(CYAN)   │
╰─────────────────────────────────────────╯
$(DEF_COLOR)
endef
export BANNER

define BONUS_BANNER
$(PURPLE)
╭─────────────────────────────────────────╮
│                                         │
│    ██╗     ██╗██████╗ ███████╗████████╗ │
│    ██║     ██║██╔══██╗██╔════╝╚══██╔══╝ │
│    ██║     ██║██████╔╝█████╗     ██║    │
│    ██║     ██║██╔══██╗██╔══╝     ██║    │
│    ███████╗██║██████╔╝██║        ██║    │
│    ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝    │
│                                         │
│            $(WHITE)● ● ● BONUS ● ● ●$(PURPLE)            │
├─────────────────────────────────────────┤
│         $(WHITE)Linked List Operations$(PURPLE)          │
│   $(GRAY)made by joolibar • 42 School • 2024$(PURPLE)   │
╰─────────────────────────────────────────╯
$(DEF_COLOR)

endef
export BONUS_BANNER

################################################################################
#                                MAKEFILE RULES                                #
################################################################################
# Compile .c -> .o (Mandatory)
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c Makefile
	@$(MKD) $(dir $@)
	@printf "$(CYAN)\r  ›  Compiling: $(WHITE)$<...\r$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -MMD -MP $(INCLUDES) -c $< -o $@

# Compile .c -> .o (Bonus)
$(OBJ_BONUS_DIR)/%.o : $(SRC_BONUS_DIR)/%.c Makefile
	@$(MKD) $(dir $@)
	@printf "$(PURPLE)\r  ›  Compiling: $(WHITE)$<...\r$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -MMD -MP $(INCLUDES) -c $< -o $@

# Build Library - Mandatory
all : banner $(NAME)
banner:
	@echo "$$BANNER"

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\n$(GREEN)  ✓  Libft built successfully! $(GRAY)[$(NAME)]$(DEF_COLOR)"

# Build Library - Bonus
bonus : bonus_banner $(NAME_BONUS)
bonus_banner:
	@echo "$$BONUS_BANNER"

$(NAME_BONUS) : $(OBJS) $(OBJS_BONUS)
	@$(AR) $(NAME_BONUS) $(OBJS) $(OBJS_BONUS)
	@echo "\n$(GREEN)  ✓  Libft bonus built successfully! $(GRAY)[$(NAME_BONUS)]$(DEF_COLOR)"

# Clean Object Files
clean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(OBJ_BONUS_DIR)
	@echo "$(YELLOW)  ○  Object files cleaned$(DEF_COLOR)"

# Full Cleanup
fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(NAME_BONUS)
	@echo "$(RED)  ✗  Libraries removed$(DEF_COLOR)"

# Rebuild Everything
re: fclean all
	@echo "\n$(ORANGE)  ↺  Rebuild complete$(DEF_COLOR)"

################################################################################
#                                PHONY TARGETS                                 #
################################################################################
.PHONY: all bonus clean fclean re
# Include dependencies
-include $(OBJS:.o=.d)
-include $(OBJS_BONUS:.o=.d)
