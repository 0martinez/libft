
#include <stdio.h>

int ft_isalpha(char x)
{
    if (x >= 'A' && x <= 'Z' || x >='a' && x <= 'z')
        return 1;
    return 0;
}

int main(void)
{
    int i;
    char x = 'x';
    i = ft_isalpha(x);
    return i;
}