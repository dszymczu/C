#include "double_linked_list.h"
/*  pre: takes a t_node* node and t_node** list
    post: adds a node to the beginning of the list
*/

void add_node(t_node* node, t_node** list)
{
  // Error Checking
  if((node == NULL) || (node->elem == NULL) || (list == NULL))
    return;
  // Adds node to the beginning of the list
  else
    {
      (*list)->prev = node;
      node->next = *list;
      node->prev = NULL;
      *list = node;
    }
}
