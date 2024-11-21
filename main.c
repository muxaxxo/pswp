// main.c
#include "./push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_stack a, b;

    if (!validate_args(argv, argc))
    {
        fprintf(stderr, "Error\n");
        return (1);
    }
    initialize_stacks(&a, &b, argv, argc);
    simple_sort(&a, &b);
    free_stacks(&a, &b);
    return (0);
}
