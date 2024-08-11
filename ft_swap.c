#include <stdio.h>

void ft_swap(int *a, int *b) 
{
    int c = 0;
    c = *a; 
    *a = *b;
    *b = c; 
}

int main()
{
    int x = 5;
    int y = 10;
    printf("%d %d\n", x, y);
    ft_swap(&x, &y);
    printf("%d %d\n", x, y);
}
