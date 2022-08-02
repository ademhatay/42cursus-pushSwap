#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

# define MAX 10


typedef struct stack{
	int items[MAX];
	int top;
	int count;
} stack_a, stack_b;


void alert(char *type, char *msg);

void createEmptyStackA(stack_a *s);
int isFullA(stack_a *s);
int isEmptyA(stack_a *s);
void pushA(stack_a *s, int newItem);
void popA(stack_a *s);
void printStackA(stack_a *s);

void createEmptyStackB(stack_b *s1);
int isFullB(stack_b *s1);
int isEmptyB(stack_b *s1);
void pushB(stack_b *s1, int newItem);
void popB(stack_b *s1);
void printStackB(stack_b *s1);

void init_stacks(stack_a *s, stack_b *s1);
void load_stacks(stack_a *s, stack_b *s1, char **av, int ac);
void printStacks(stack_a *s, stack_b *s1);


#endif