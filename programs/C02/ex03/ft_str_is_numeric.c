/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adselles <adselles@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:50:22 by adselles         #+#    #+#             */
/*   Updated: 2025/08/31 20:50:22 by adselles        ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("-42"));
	printf("%d\n", ft_str_is_numeric(""));


}
