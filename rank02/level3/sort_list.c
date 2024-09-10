#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int		hold;
    t_list	*start;

    start = lst;
    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
	{
            hold = lst->data;
            lst->data = lst->next->data;
            lst->next->data = hold;
            lst = start;
        }
	else
		lst = lst->next;
    }
    return (start);
}
