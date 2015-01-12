#include "double_linked_list.h"
/*  pre: takes a t_node* list and an unsigned int index
    post: returns a void* elem which is the element of the node in the list at the index
          specified. If the length of the index is greater than the length of the list,
	  the last node's element is returned 
*/
void* elem_at(t_node* list, unsigned int index)
{
  void* elem;
  t_node* holder;

  // Error Checking
  if(list == NULL)
    return NULL;

  // Holder Initialized to list pointer
  holder = list;

  // If moves holder to wanted node
  while((holder->next != NULL) && (index >0))
    {
      holder = holder->next;
      index--;
    }

  // Returns element of that node
  elem = holder->elem;
  return elem;
}

