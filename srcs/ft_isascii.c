#include "libft.h"

int ft_isascii(int c)
{
    return (c <= 127 && c >= 0) ? 1 : 0;
}