#include "double_linked_list.h"
/*  pre: takes a t_node* node, t_node** list, and unsigned int index
    post: puts the node at the index specified in the list. if the index value
          is greater than the length of the list, the value will be added at the
          end of the list 
*/
void add_node_at(t_node* node, t_node** list, unsigned int index)
{
  t_node* holder;

  // Error Checking
  if((node == NULL) || (node->elem == NULL) || (list == NULL))
    return;
  
  // Insertion index is at the front of list
  if(index == 0)
    add_node(node, list);
  else
    {
      // Holder initialized to first node
      holder = *list;
      // Moves holder to before the place of insertion
      while((holder->next != NULL) && (index > 1))
	{
	  holder = holder->next;
	  index--;
	}
      // End of list
      if(holder->next == NULL)
	{
	  node->prev = holder;
	  holder->next = node;
	  node->next = NULL;
	}
      // Otherwise
      else
	{
	  node->prev = holder;
	  node->next = holder->next;
	  node->next->prev = node;
	  holder->next = node;
	}
    }
}

		 
	   
