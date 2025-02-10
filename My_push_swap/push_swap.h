#ifndef
# define PUSH_SWAP_H

# include <unistd.h>
# include 

typedef struct t_list
{
	int value;
	int index;
	s_stack *next;
}s_list


//movements logic
void    swap(s_list **a);
int     push(s_list **stack_destiny, s_list **stack_origin);

//swap movement
int     sa(s_list **stack_a);
int     sb(s_list **stack_b);
int     ss(s_list **stack_a, s_list **stack_b);

//push movement
int     pa(s_list **stack_a, s_list **stack_b);
int     pb(s_list **stack_b, s_list **stack_a);

#endif

