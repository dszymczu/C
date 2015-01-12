#include "double_linked_list.h"
/*  
    pre: Takes a t_node* list
    post: Returns a pointer to the next node of the list
*/
t_node* nextNode(t_node* list)
{
  if(list->next == NULL)
    return list;
  else
    return list->next;
}
