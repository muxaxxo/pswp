
#include "./push_swap.h"

void sa(t_stack *a)
{
    if (a->size > 1)
    {
        int temp = a->data[0];
        a->data[0] = a->data[1];
        a->data[1] = temp;
    }
}

void sb(t_stack *b)
{
    if (b->size > 1)
    {
        int temp = b->data[0];
        b->data[0] = b->data[1];
        b->data[1] = temp;
    }
}

void ss(t_stack *a, t_stack *b)
{
    sa(a);
    sb(b);
}
