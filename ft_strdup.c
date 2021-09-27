#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t	i;
    char *aux = (char *) malloc(sizeof(s));
	i = 0;
    while(s[i] == 0)
	{
		aux[i] = s[i];
		i++;
	}
	return (*aux);
}