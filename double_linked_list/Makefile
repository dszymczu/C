#Makefile for libmylist.a
NAME = libdoublelinkedlist.a
SRC = prevNode.c nextNode.c new_node.c add_node.c add_elem.c append.c add_node_at.c \
      remove_node.c remove_node_at.c remove_last.c count_nodes.c \
      empty_list.c node_at.c elem_at.c traverse_int.c traverse_char.c \
      traverse_string.c backwards_traverse_string.c backwards_traverse_int.c \
      backwards_traverse_char.c
OBJ = $(SRC:.c=.o)
RM = rm -f
INCLPATH = ../../include
LIBPATH = ../../lib
CFLAGS += -I$(INCLPATH)
all: $(OBJ)
	ar -rc $(LIBPATH)/$(NAME) $(OBJ)
	ranlib $(LIBPATH)/$(NAME)
clean:
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core
fclean: clean
	-$(RM) $(LIBPATH)/$(NAME)
re: fclean all clean
