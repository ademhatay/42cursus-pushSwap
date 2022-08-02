#include "push_swap.h"

void createEmptyStackA(stack_a *s)
{
	s->top = -1;
}

int isFullA(stack_a *s)
{
	if (s->top == MAX - 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

int isEmptyA(stack_a *s)
{
	if (s->top == -1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

void pushA(stack_a *s, int newItem)
{
	if (isFullA(s))
		alert("ERR", "STACK A DOLU!");
	else
	{
		s->top++;
		s->items[s->top] = newItem;
		alert("SUCCESS", "A-> İtem Eklendi: ");
		printf("\x1b[33m%d\x1b[0m\n", newItem);
	}
	s->count++;
}

void popA(stack_a *s)
{
	if (isEmptyA(s))
		alert("ERR", "STACK A BOŞ!");
	else
	{
		alert("DEL", "A-> İtem Silindi: ");
		printf(ANSI_COLOR_MAGENTA "%d\n" ANSI_COLOR_RESET, s->top);
		s->top--;
	}
	s->count--;
}


void printStackA(stack_a *s) 
{
  printf("Stack A: ");
  for (int i = 0; i < s->count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}
