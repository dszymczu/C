#include "double_linked_list.h"
/*  pre: takes a void* elem and t_node* next
    post: returns a t_node* which is a newly created node 
*/
t_node* new_node(void* elem, t_node* next)
{
  t_node* node;
  
  // Return null if here is no element
  if(elem == NULL)
    return NULL;
  // Allocates space for node, initializes and returns it. 
  else
    {
      node = (t_node*) xmalloc(sizeof(t_node));
      node->prev = NULL;
      node->elem = elem;
      node->next = next;
      return node;
    }
}
  
