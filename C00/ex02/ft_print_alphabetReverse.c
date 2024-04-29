#include <unistd.h>

void ft_print_alphabetReverse(void)
{
    char c;
    c = 'z';

    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}