#include "double_linked_list.h"
/*  pre: takes a t_node* node and t_node** list
    post: puts the node at the end of the list  
*/

void append(t_node* node, t_node** list)
{
  t_node* holder;

  // Error Checking
  if((node == NULL) || (list == NULL) || (*list == NULL))
    return;
  // Initializing holder as the first element in the list
  holder = *list;
  // Moves holder to the end of the list
  while(holder->next != NULL)
       holder = holder->next;
  // Places node at the end of the list
  node->prev = holder;
  holder->next = node;
}
