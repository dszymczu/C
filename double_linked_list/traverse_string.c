#include "double_linked_list.h"
/*  pre: takes a t_node* list
    post: prints the string elements of the linked list and NULL if it contains it. 
*/

void traverse_string(t_node* list)
{
  // Error Checking
  if(list == NULL)
    return;
  else
    {
      // do while loop goes through list, printing current element
      // or NULL until it reaches the end of the list
      do{
	if(list->elem == NULL)
	  my_str("NULL");
	else
	  my_str(list->elem);
	my_str(" ");
	list = list->next;
      } while(list != NULL);
    }
}
