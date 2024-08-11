#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
     *********nbr = 42;
}

int main()
{
    int c = 0;
 
    
    int *nbr2 = &c;
    printf("%p %d\n",&c,c); 
    
    int **nbr3 = &nbr2;
    printf("%p %p\n",&nbr2,&c); 
    
    int ***nbr4 = &nbr3;
    printf("%p %p\n",&nbr3,&nbr2); 
    
    int ****nbr5 = &nbr4;
    printf("%p %p\n",&nbr4,&nbr3); 
    int *****nbr6 = &nbr5;
    
    printf("%p %p\n",&nbr5, &nbr4); 
    int ******nbr7 = &nbr6;
    
    printf("%p %p\n",&nbr6, &nbr5); 
    int *******nbr8 = &nbr7;
    
    printf("%p %p\n",&nbr7, &nbr8); 
    int ********nbr9 = &nbr8;
    
    printf("%p %p\n",&nbr8, &nbr7); 
    int *********nbr10 = &nbr9;

    ft_ultimate_ft(nbr10);
    printf("%d \n",c); 
}
