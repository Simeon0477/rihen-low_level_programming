#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        //Il faut convertir i en caractère pour qu'il puisse être affiché avec la focntion putchar
        putchar(i);
        //Incrémenter i pour  éviter une boucle infinie
    }

    printf("Infinite loop avoided! \\o/\n");
    
    return (0);
}