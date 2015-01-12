#include "double_linked_list.h"
/*  pre: takes a t_node* list
    post: prints the integer elements of the linked list and NULL if it contains it.
 */

void traverse_int(t_node* list)
{
  // Error checking
  if(list == NULL)
    return;
  else
    {
      // do while loop goes through list, printing the current element
      // or NULL until it reaches the end of the list.
      do{
	if(list->elem == NULL)
	  my_str("NULL");
	else
	    my_int(*((int *) list->elem));
	my_str(" ");
	list = list->next;
      } while(list != NULL);
    }
}
