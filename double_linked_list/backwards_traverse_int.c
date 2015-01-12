#include "double_linked_list.h"
/*  pre: takes a t_node* list
    post: prints the integer elements of the linked list and NULL if it contains it. 
*/
void backwards_traverse_int(t_node* list)
{
  // Moves list pointer to the end of the list
  while(list->next != NULL)
    list = list->next;
  // Error checking
  if(list->prev == NULL)
    return;
  else
    {
      // do while loop goes through the list backwards printing the current element
      // or NULL until it reaches the beginning of the list
      do{
	if(list->elem == NULL)
	  my_str("NULL");
	else
	  my_int(*((int *) list->elem));
	my_str(" ");
	list = list->prev;
      } while(list != NULL);
    }
}
