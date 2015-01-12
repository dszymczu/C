#include "double_linked_list.h"
/*  pre: Takes a t_node* list
    post: Returns the next node of the list
*/
t_node* prevNode(t_node* list)
{
  if(list->prev == NULL)
    return list;
  else
    return list->prev;
}
