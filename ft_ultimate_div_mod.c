#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int x = 0;
    x = *a / *b;
    *b = *a % *b;
    *a = x;
}

int main()
{
    int c = 9;
    int d = 6;
    
    ft_ultimate_div_mod(&c, &d);
    printf("%i %i\n",c, d); 
}
