#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char *p = (char *) s;

    while (n--) 
        *p++ = (char) c;

    return s;
}