#include <stdio.h>

void ft_ultimate_ft(int ********nbr)
{
    *nbr = 42;  
}

int main()
{
    int nbr = 1;
    printf("%d %p\n", nbr, &nbr);
    
    int *nbr1 = &nbr;
    printf("%p %p\n", &nbr, nbr1);
    
    int *nbr2 = &nbr1;
    printf("%p %p\n", nbr1, nbr2);
    
    int *nbr3 = &nbr2;
    printf("%p %p\n", nbr2, nbr3);
    
    int *nbr4 = &nbr3;
    printf("%p %p\n", nbr3, nbr4);
    
    int *nbr5 = &nbr4;
    printf("%p %p\n", nbr4, nbr5);
    
    int *nbr6 = &nbr5;
    printf("%p %p\n", nbr5, nbr6);
    
    int *nbr7 = &nbr6;
    printf("%p %p\n", nbr6, nbr7);
    
    int *nbr8 = &nbr7;
    printf("%p %p\n", nbr7, nbr8);
    
    ft_ultimate_ft(&nbr);
    printf("%p %d\n", nbr8, nbr);
}
