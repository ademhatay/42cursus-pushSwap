#include "push_swap.h"

void createEmptyStackB(stack_b *s1)
{
	s1->top = -1;
}

int isFullB(stack_b *s1)
{
	if (s1->top == MAX - 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

int isEmptyB(stack_b *s1)
{
	if (s1->top == -1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

void pushB(stack_b *s1, int newItem)
{
	if (isFullB(s1))
		alert("ERR", "STACK B DOLU!");
	else
	{
		s1->top++;
		s1->items[s1->top] = newItem;
		alert("SUCCESS", "B-> İtem Eklendi: ");
		printf("\x1b[33m%d\x1b[0m\n", newItem);
	}
	s1->count++;
}

void popB(stack_b *s1)
{
	if (isEmptyB(s1))
		alert("ERR", "STACK B BOŞ!");
	else
	{
		alert("DEL", "B-> İtem Silindi: ");
		printf(ANSI_COLOR_MAGENTA "%d\n" ANSI_COLOR_RESET, s1->top);
		s1->top--;
	}
	s1->count--;
}

void printStackB(stack_b *s1) 
{
  printf("Stack B: ");
  for (int i = 0; i < s1->count; i++) {
    printf("%d ", s1->items[i]);
  }
  printf("\n");
}
