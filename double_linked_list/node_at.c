#include "double_linked_list.h"
/*  pre: takes a t_node* list and an unsigned int index
    post: returns a t_node* node which is the node at the
          index in the list. If the index is greater than
	  the length of the list, the last node in the
	  list is returned 
*/
t_node* node_at(t_node* list, unsigned int index)
{
  t_node* ret;

  // Error Checking
  if(list == NULL)
    return NULL;

  // Initializes ret to the list
  ret = list;
  
  // Moves ret to the needed position and returns it
  while((ret->next != NULL) && (index > 0))
    {
      ret = ret->next;
      index--;
    }
  return ret;
}

