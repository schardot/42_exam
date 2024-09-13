#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;
	t_list	*last;
	t_list	*temp;
	
	cur = *begin_list;
	last = NULL;
	while(cur)
	{
		if ((*cmp)(data_ref, cur->data) == 0)
		{
			last->next = cur->next;
			temp = cur;
		      	free (temp);
		      	cur = cur->next;
	       			       
		}
		else
		{
			last = cur;
			cur = cur->next;
		}
	}
}
