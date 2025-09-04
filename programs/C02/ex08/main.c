#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char text[] = "RAMONCIN!";

    printf("Antes: %s\n", text);            // original
    ft_strlowcase(text);                     // modificamos
    printf("Después: %s\n", text);          // modificada

    return (0);
}
