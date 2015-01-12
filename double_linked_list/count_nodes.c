#include "double_linked_list.h"
/*  pre: takes a t_node* list
    post: returns an unsigned int indicating the number
          of nodes in the list  
*/
unsigned int count_nodes(t_node* list)
{
  unsigned int count = 0;
  
  // Error Checking
  if(list == NULL)
    return 0;
  // Counts Nodes in list
  while(list->next != NULL)
    {
      count++;
      list=list->next;
    }
  count++;
  return count;
}
