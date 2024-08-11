#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int c = 69;
    int d = 10;
    printf("%i %i\n",c, d); 
    ft_swap(&c, &d);
    printf("%i %i\n",c, d); 
}
