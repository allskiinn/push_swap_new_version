#include "push_swap.h"

void	ft_free_list(t_node *list)
{
	t_node	*current;
	t_node	*next;

	current = list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	ft_free_matrix(char **matriz)
{
	int	i;

	i = -1;
	while (matriz[++i])
		free(matriz[i]);
	free(matriz);
}

void	ft_move_min_to_top(t_node **a)
{
	int	min;
	int	sentido;
	int	index;

	min = ft_stack_get_min(*a);
	index = ft_get_index(*a, min);
	if (index <= ft_count_list(*a) / 2)
	{
		sentido = -1;
	}
	else
	{
		sentido = 1;
	}
	while ((*a)->value != min)  // Altere aqui para usar `value`
	{
		if (sentido == -1)
			ft_rotate_a(a, 1);
		else
			ft_reverse_rotate_a(a, 1);
	}
}

int	ft_count_array(char **rede)
{
	int	i;

	i = 0;
	while (rede[i])
		i++;
	return (i);
}