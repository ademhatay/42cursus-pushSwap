#include "push_swap.h"

void init_stacks(stack_a *s, stack_b *s1)
{
	createEmptyStackA(s);
	createEmptyStackB(s1);
}

void load_stacks(stack_a *s, stack_b *s1, char **av, int ac)
{
	int i;
	int tmp;

	tmp = ac;
	i = 1;
	while (tmp != 0)
	{
		if (i == ac)
			break ;
		pushA(s, atoi(av[i]));
		i++;
		tmp--;
	}
}

void printStacks(stack_a *s, stack_b *s1)
{
	printStackA(s);
	printStackB(s1);
}