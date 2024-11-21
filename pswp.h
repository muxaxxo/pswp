// push_swap.h
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>

typedef struct s_stack
{
    int *data;
    int size;
} t_stack;

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *b, t_stack *a);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

int validate_args(char **argv, int argc);
void initialize_stacks(t_stack *a, t_stack *b, char **argv, int argc);
void simple_sort(t_stack *a, t_stack *b);
void free_stacks(t_stack *a, t_stack *b);

#endif