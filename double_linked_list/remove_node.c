#include "double_linked_list.h"
/*  pre: takes a t_node** list
    post: returns the element of the first node then
          removes the first node of the list and frees the node  
*/
void* remove_node(t_node** list)
{
  void* ret;
  t_node* holder;
  
  // Error Checking 
  if((list == NULL) || (*list == NULL))
    return NULL;
 
  // Initializing holder to the first node of the list
  holder = *list;

  // Fix list pointer after first node (holder) is deleted
  if(holder->next != NULL)
    *list = holder->next;
  else
    *list = NULL;

  // Set return value and free holder
  ret = holder->elem;
  holder->next = NULL;
  holder->elem = NULL;
  free(holder);
  return ret;

}
