#include "double_linked_list.h"
/*  pre: takes a void* elem and a t_node** list
    post: adds the elem to the list by adding a node that contains the elem
          to the front of the list */

void add_elem(void* elem, t_node** list)
{
  t_node* node;
  if((elem == NULL) || (list == NULL))
    return;
  else
    {
      node = new_node(elem, (*list));
      *list = node;
    }
}
