#include "push_swap.h"

int main(int ac, char **av)
{
	stack_a *s = (stack_a *)malloc(sizeof(stack_a));
	stack_b *s1 = (stack_b *)malloc(sizeof(stack_b));

	init_stacks(s, s1);
	load_stacks(s, s1, av, ac);
	//TODO check stack no duplicate
	
	printStacks(s, s1);
}