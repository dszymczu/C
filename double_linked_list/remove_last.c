#include "double_linked_list.h"
/*  pre: takes in a t_node** list
    post: returns the element of the deleted last node
          of the list
*/
void* remove_last(t_node** list)
{
  t_node* holder;
  t_node* deleteNode;
  void* ret;
  
  // Error Checking
  if((list == NULL) || (*list == NULL))
    return NULL;
  
  // Initialized holder to the first element of the list
  holder = *list;

  // Moves holder to the last node
  while(holder->next != NULL)
    holder = holder->next;

  
  // Removes the node, frees the memory and returns the element
  // of the deleted node.
  ret = holder->elem;
  holder->prev->next = NULL;
  holder->elem = NULL;
  holder->prev = NULL;
  holder->next = NULL;
  free(holder);
  return ret;
}

   
