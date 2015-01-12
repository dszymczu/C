#include "double_linked_list.h"
/*  pre: takes a t_node** list
    post: empties the list  
*/

void empty_list(t_node** list)
{
  // Error Checking
  if((list == NULL) || (*list == NULL))
    return;

  // Calls remove_node for all nodes in list until empty
  for(; *list != NULL;)
    remove_node(list);
}
