#include "double_linked_list.h"
/* pre: takes a t_node** list and an unsigned int index
   post: returns the value of the elemend of the node at the index
         unless the index is high which returns the value of the last node
	 then removes the said node and frees it 
*/
void* remove_node_at(t_node** list, unsigned int index)
{
  void* ret;
  t_node* holder;
  
  // Error Checking
  if((list == NULL) || (*list == NULL))
    return NULL;

  // Sets holder to the first node of the list
  holder = *list;

  // If we need to delete the first node, we use remove_node
  if((index == 0) || (holder->next == NULL))
    {
      ret = remove_node(list);
      return ret;
    }
  
  // Move holder to the position before deletion
  while(holder->next != NULL && index >= 1)
    {
      holder = holder-> next;
      index--;
    }

  // Fix pointers based on deletion
  if(holder->next == NULL)
    holder->prev->next = NULL;
  else{
    (holder->prev)->next = holder->next;
    (holder->next)->prev = holder->prev;
  }
  
  // Get return value and free holder
  ret = holder->elem;
  holder->prev = NULL;
  holder->elem = NULL;
  holder->next = NULL;
  free(holder);
  return ret;
  
}	

    
    

