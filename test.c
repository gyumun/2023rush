#include <unistd.h>

void    ft_putchar(void);

void    print_line(char start, char middle, char end, int line_counter)
{
    ft_putchar(start);
    while (--line_counter > 1)
        ft_putchar(middle);
    if (line_counter == 1)
        ft_putchar(end);
}

void    rush(int x, int y)
{
    int i;

    if (x > 0 && y > 0)
    {
        i = 0;
        while (i < y)
        {
            if (i == 0)
                print_line('A', 'B', 'A', x);
            else if (i == y - 1)
                print_line('C', 'B', 'C', x);
            else
                print_line('B', ' ', 'B', x);
            i++;
            write(1, "\n", 1);
        }
    }
}
