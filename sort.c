#include "./push_swap.h"

void simple_sort(t_stack *a, t_stack *b)
{
    while (!is_sorted(a))
    {
        if (a->data[0] > a->data[1])
            sa(a);
        else
            pb(a, b);
    }
    while (b->size > 0)
        pa(b, a);
}
