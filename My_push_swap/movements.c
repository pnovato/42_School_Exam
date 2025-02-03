#include <stdlib.h>
#include "push_swap.h"

void	swap(s_list **a)
{
	s_list	*head;
	s_list	*next;
	int	aux_value;
	int	aux_index;

	if (ft_lstsize(*a) < 2)
		return(-1);
	head = *a;
	next = a->next;
	if (!head && !next)
		ft_error("Error while swapping!");
	aux_value = a->value;
	aux_index = a->index;
	a->value = next->value;
	a->index = next->index;
	next->value = aux_value;
	next->index = aux_index;
	return (0);
}

void	sa(s_list **a)
{
	if (*a && (*a)->next)
	{
		
	}
}
