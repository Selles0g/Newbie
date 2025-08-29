#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    char dest[67];
    char src[] =  "provolone";

    ft_strncpy(dest, src, 11);
    printf("\"%s\"\n", dest);

    return (0);
}
