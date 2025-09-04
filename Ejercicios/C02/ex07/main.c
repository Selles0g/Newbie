char	*ft_strupcase(char *str);

#include <stdio.h>

int	main(void)
{
	char text[] = "Wassup69blin";
	printf("antes: %s\n", text);
	printf("después: %s\n", ft_strupcase(text));
	return (0);
}
