#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pede números ao usuário
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    //Divide x por y
    if (x < y)
    {
        printf("x é menor que y\n");
    }
    
    else if (x > y)
    {
        printf("x é maior que y\n");
    }
    
    else 
    {
        printf("x é igual a y\n");
    }
}
