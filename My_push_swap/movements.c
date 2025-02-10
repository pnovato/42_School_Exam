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

int	push(s_list **stack_destiny, s_list **stack_origin)
{
	s_list	*temp;
	s_list	*head_destiny;
	s_list	*head_origin;

	if (ft_lstsize(*stack_origin) == 0)
		return (-1);
	head_destiny = stack_destiny;
	head_origin = stack_origin;
	temp = stack_origin;
	head_origin = head_origin->next;
	*stack_origin = head_origin;
	if (!head_destiny)
	{
		head_destiny = temp;
		head_destiny->next = NULL;
		*stack_destiny = head_destiny;
	}
	else
	{
		temp->next = head_destiny;
		*stack_destiny = temp;
	}
	return (0);
}

int	rotate(s_list **stack_master)
{
	s_list	*head;
	s_list	*tail;
	if (ft_lstsize(*stack_master) == 0)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack_master = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);	
}

int	reverseRotate(s_list **stack_master)
{
	s_list	*head;
	s_list	*tail;
	if (ft_lstsize(*stack_master) < 2)
		return (-1);
	head = *stack_master;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	sa(s_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(s_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(s_list **stack_a, s_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (-1);
	swap(**stack_a);
	swap(**stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}


int	pa(s_list **stack_a, s_list **stack_b)
{
	if (push(*stack_a, *stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(s_list **stack_b, s_list **stack_a)
{
	if (push(*stack_b, *stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	ra(s_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(s_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(s_list **stack_a, s_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int	rra(s_list **stack_a)
{
	if (reverseRotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(s_list **stack_b)
{
	if (reverseRotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(s_list **stack_a, s_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	reverseRotate(stack_a);
	reverseRotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}

