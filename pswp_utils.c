#include "./push_swap.h"
#include <limits.h>
#include <stdlib.h>

int validate_args(char **argv, int argc)
{
    int i;
    long num;

    for (i = 1; i < argc; i++)
    {
        num = ft_atoi(argv[i]);
        if (num > INT_MAX || num < INT_MIN || !is_unique(argv, i))
            return (0);
    }
    return (1);
}
